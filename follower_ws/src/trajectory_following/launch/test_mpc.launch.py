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
    traj_file_name = get_share_file('file_trajectory_planner', 'param/trajectories/full_trajectory.txt')
    traj_out_file_name = get_share_file('file_trajectory_planner', 'param/trajectories/full_trajectory_out.txt')

    # --------------------------------- Params -------------------------------
    mpc_controller_param_file = get_share_file(
            package_name='test_trajectory_following', file_name='param/mpc_controller.param.yaml')
    # -------------------------------- Nodes-----------------------------------


    mpc_controller_param = DeclareLaunchArgument(
            'mpc_controller_param_file',
            default_value=mpc_controller_param_file,
            description='Path to config file for MPC Controller'
        )

    mpc_controller_nodes = Node(
            package="mpc_controller_nodes",
            node_executable="mpc_controller_node_exe",
            node_name="mpc_controller",
            node_namespace='control',
            parameters=[LaunchConfiguration('mpc_controller_param_file')],
            output='screen',
            remappings=[
                ("/vehicle/vehicle_kinematic_state", "/vehicle_kinematic_state"),
                ("/vehicle/vehicle_command", "/raw_command"),

                # ("trajectory", "/planning/trajectory"),
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
            ("vehicle_state", "vehicle_kinematic_state"),
            ("trajectory", "/planning/trajectory"),
        ]
    )
    
    # trajectory_following = Node(
    #     package="trajectory_following",
    #     node_executable="trajectory_following_exe",
    #     name="trajectory_following",
    #     output="screen",
    #     remappings=[
    #         ("vehicle_state", "/vehicle_kinematic_state"),
    #         ("ctrl_cmd", "/vehicle_command"),
    #         ("trajectory", "/planning/trajectory"),
    #     ]
    # )

    # pid_controller = Node(
    #     package="pid_velocity_control",
    #     node_executable="pid_velocity_control_exe",
    #     name="pid_velocity_control",
    #     output="screen",
    #     parameters=[
    #         {"kp":  [1.0,1.0,1.0,1.0]},
    #         {"kd": [0.0,0.0,0.0,0.0]},
    #         {"ki": [0.0,0.0,0.0,0.0]},
    #         {"gain_steps": [100.0,101.0,102.0,103.0]},
    #         {"max_throttle_acc": 1000.0},
    #         {"min_throttle_acc": -1000.0},
    #         {"max_brake_acc": 1000.0},
    #         {"min_brake_acc": -1000.0},
    #         {"max_throttle": 10.0},#~m/s^2
    #         {"min_throttle": -10.0},
    #         {"vrx_simulator": False},

    #     ],
    #     # parameters=[{"trajectory_file_name": traj_file_name}],# str(param_file)  {"trajectory_file_name": traj_file_name}

    #     # parameters=[pid_params],#

    #     remappings=[
    #         ("vehicle_state", "vehicle_kinematic_state"),        
    #     ]
    # )


    ld = LaunchDescription([
        # traj_file_name_param,
        mpc_controller_param,
        mpc_controller_nodes,
        file_trajectory_planner,


    ])
    return ld
