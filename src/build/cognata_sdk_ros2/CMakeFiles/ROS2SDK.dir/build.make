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
CMAKE_SOURCE_DIR = /home/kcg/ROS2Sample/src/cognata_sdk_ros2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kcg/ROS2Sample/src/build/cognata_sdk_ros2

# Include any dependencies generated for this target.
include CMakeFiles/ROS2SDK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ROS2SDK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ROS2SDK.dir/flags.make

CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o: CMakeFiles/ROS2SDK.dir/flags.make
CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o: /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros_utility_funcs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o -c /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros_utility_funcs.cpp

CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros_utility_funcs.cpp > CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.i

CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros_utility_funcs.cpp -o CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.s

CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o: CMakeFiles/ROS2SDK.dir/flags.make
CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o: /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros2_sample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o -c /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros2_sample.cpp

CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros2_sample.cpp > CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.i

CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/ros2_sample.cpp -o CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.s

CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o: CMakeFiles/ROS2SDK.dir/flags.make
CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o: /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/sensors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o -c /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/sensors.cpp

CMakeFiles/ROS2SDK.dir/src/sensors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROS2SDK.dir/src/sensors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/sensors.cpp > CMakeFiles/ROS2SDK.dir/src/sensors.cpp.i

CMakeFiles/ROS2SDK.dir/src/sensors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROS2SDK.dir/src/sensors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/sensors.cpp -o CMakeFiles/ROS2SDK.dir/src/sensors.cpp.s

CMakeFiles/ROS2SDK.dir/src/main.cpp.o: CMakeFiles/ROS2SDK.dir/flags.make
CMakeFiles/ROS2SDK.dir/src/main.cpp.o: /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ROS2SDK.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROS2SDK.dir/src/main.cpp.o -c /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/main.cpp

CMakeFiles/ROS2SDK.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROS2SDK.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/main.cpp > CMakeFiles/ROS2SDK.dir/src/main.cpp.i

CMakeFiles/ROS2SDK.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROS2SDK.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kcg/ROS2Sample/src/cognata_sdk_ros2/src/main.cpp -o CMakeFiles/ROS2SDK.dir/src/main.cpp.s

# Object files for target ROS2SDK
ROS2SDK_OBJECTS = \
"CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o" \
"CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o" \
"CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o" \
"CMakeFiles/ROS2SDK.dir/src/main.cpp.o"

# External object files for target ROS2SDK
ROS2SDK_EXTERNAL_OBJECTS =

ROS2SDK: CMakeFiles/ROS2SDK.dir/src/ros_utility_funcs.cpp.o
ROS2SDK: CMakeFiles/ROS2SDK.dir/src/ros2_sample.cpp.o
ROS2SDK: CMakeFiles/ROS2SDK.dir/src/sensors.cpp.o
ROS2SDK: CMakeFiles/ROS2SDK.dir/src/main.cpp.o
ROS2SDK: CMakeFiles/ROS2SDK.dir/build.make
ROS2SDK: /usr/lib/libCognataSDK.a
ROS2SDK: /usr/lib/libCognataSDK_proto.a
ROS2SDK: /home/kcg/ROS2Sample/src/cognata_sdk_ros2/libs/cognataSDKLibs/libprotobuf.so
ROS2SDK: /opt/ros/foxy/lib/librclcpp.so
ROS2SDK: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
ROS2SDK: libcognata_sdk_ros2__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librcl.so
ROS2SDK: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librmw_implementation.so
ROS2SDK: /opt/ros/foxy/lib/librmw.so
ROS2SDK: /opt/ros/foxy/lib/librcl_logging_spdlog.so
ROS2SDK: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
ROS2SDK: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
ROS2SDK: /opt/ros/foxy/lib/libyaml.so
ROS2SDK: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libtracetools.so
ROS2SDK: /opt/ros/foxy/lib/libsensor_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
ROS2SDK: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
ROS2SDK: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
ROS2SDK: /opt/ros/foxy/lib/librosidl_typesupport_c.so
ROS2SDK: /opt/ros/foxy/lib/librcpputils.so
ROS2SDK: /opt/ros/foxy/lib/librosidl_runtime_c.so
ROS2SDK: /opt/ros/foxy/lib/librcutils.so
ROS2SDK: CMakeFiles/ROS2SDK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ROS2SDK"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ROS2SDK.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ROS2SDK.dir/build: ROS2SDK

.PHONY : CMakeFiles/ROS2SDK.dir/build

CMakeFiles/ROS2SDK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROS2SDK.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROS2SDK.dir/clean

CMakeFiles/ROS2SDK.dir/depend:
	cd /home/kcg/ROS2Sample/src/build/cognata_sdk_ros2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kcg/ROS2Sample/src/cognata_sdk_ros2 /home/kcg/ROS2Sample/src/cognata_sdk_ros2 /home/kcg/ROS2Sample/src/build/cognata_sdk_ros2 /home/kcg/ROS2Sample/src/build/cognata_sdk_ros2 /home/kcg/ROS2Sample/src/build/cognata_sdk_ros2/CMakeFiles/ROS2SDK.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROS2SDK.dir/depend

