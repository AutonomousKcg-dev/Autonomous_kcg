# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback

# Include any dependencies generated for this target.
include CMakeFiles/g29_force_feedback.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/g29_force_feedback.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/g29_force_feedback.dir/flags.make

CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o: CMakeFiles/g29_force_feedback.dir/flags.make
CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o: /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/src/g29_force_feedback.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o -c /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/src/g29_force_feedback.cpp

CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/src/g29_force_feedback.cpp > CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.i

CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/src/g29_force_feedback.cpp -o CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.s

# Object files for target g29_force_feedback
g29_force_feedback_OBJECTS = \
"CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o"

# External object files for target g29_force_feedback
g29_force_feedback_EXTERNAL_OBJECTS =

g29_force_feedback: CMakeFiles/g29_force_feedback.dir/src/g29_force_feedback.cpp.o
g29_force_feedback: CMakeFiles/g29_force_feedback.dir/build.make
g29_force_feedback: /opt/ros/foxy/lib/librclcpp.so
g29_force_feedback: libros_g29_force_feedback__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librcl.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librmw_implementation.so
g29_force_feedback: /opt/ros/foxy/lib/librmw.so
g29_force_feedback: /opt/ros/foxy/lib/librcl_logging_spdlog.so
g29_force_feedback: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
g29_force_feedback: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
g29_force_feedback: /opt/ros/foxy/lib/libyaml.so
g29_force_feedback: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/libtracetools.so
g29_force_feedback: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
g29_force_feedback: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
g29_force_feedback: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
g29_force_feedback: /opt/ros/foxy/lib/librosidl_typesupport_c.so
g29_force_feedback: /opt/ros/foxy/lib/librcpputils.so
g29_force_feedback: /opt/ros/foxy/lib/librosidl_runtime_c.so
g29_force_feedback: /opt/ros/foxy/lib/librcutils.so
g29_force_feedback: CMakeFiles/g29_force_feedback.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable g29_force_feedback"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/g29_force_feedback.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/g29_force_feedback.dir/build: g29_force_feedback

.PHONY : CMakeFiles/g29_force_feedback.dir/build

CMakeFiles/g29_force_feedback.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/g29_force_feedback.dir/cmake_clean.cmake
.PHONY : CMakeFiles/g29_force_feedback.dir/clean

CMakeFiles/g29_force_feedback.dir/depend:
	cd /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/g29_force_feedback.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/g29_force_feedback.dir/depend

