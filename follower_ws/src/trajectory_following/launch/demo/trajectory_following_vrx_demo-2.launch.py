from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from ament_index_python import get_package_share_directory
import os


def get_share_file(package_name, file_name):
    return os.path.join(get_package_share_directory(package_name), file_name)


def generate_launch_description():
    traj_file_name = get_share_file('file_trajectory_planner', 'param/trajectories/full_trajectory-2.txt')
    traj_out_file_name = get_share_file('file_trajectory_planner', 'param/trajectories/full_trajectory-2_out.txt')

    # --------------------------------- Params -------------------------------
    pid_param_file = get_share_file(
        package_name='pid_velocity_control', file_name='param/pid_vrx.param.yaml')

    # --------------------------------- Arguments -------------------------------
    pid_param = DeclareLaunchArgument(
        'pid_param_file',
        default_value=pid_param_file,
        description='Path to config file for PID controller'
    )


    # -------------------------------- Nodes-----------------------------------



    borders_file_name = get_share_file('track_borders', 'param/indy_track_borders.txt')

    track_borders = Node(
        package="track_borders",
        node_executable="track_borders_exe",
        # node_namespace="control",
        name="track_borders",
        output="screen",
        parameters=[{"borders_file_name": borders_file_name}],# str(param_file)  {"trajectory_file_name": traj_file_name}
        remappings=[
            ("vehicle_state", "/vehicle_kinematic_state"),
        ]
    )


    file_trajectory_planner = Node(
        package="file_trajectory_planner",
        node_executable="file_trajectory_planner_exe",
        name="file_trajectory_planner",
        output="screen",
        parameters=[{"trajectory_file_name": traj_file_name},
                    {"trajectory_out_file_name": traj_out_file_name},
                    {"compute_velocity": False}],
        remappings=[
            ("vehicle_state", "/vehicle_kinematic_state"),
            ("trajectory", "/planning/trajectory"),
        ]
    )
    
    trajectory_following = Node(
        package="trajectory_following",
        node_executable="trajectory_following_exe",
        name="trajectory_following",
        output="screen",
        remappings=[
            ("vehicle_state", "/vrx/high_freq_vehicle_kinematic_state"),
            ("ctrl_cmd", "/vehicle_command"),
            ("trajectory", "/planning/trajectory"),
        ]
    )

    pid_controller = Node(
        package="pid_velocity_control",
        node_executable="pid_velocity_control_exe",
        name="pid_velocity_control",
        output="screen",
        parameters=[LaunchConfiguration('pid_param_file')],
        remappings=[
            ("vehicle_state", "/vrx/high_freq_vehicle_kinematic_state"),        
        ]
    )


    ld = LaunchDescription([
        # traj_file_name_param,
        pid_param,
        track_borders,
        file_trajectory_planner,
        trajectory_following,
        pid_controller,

    ])
    return ld
