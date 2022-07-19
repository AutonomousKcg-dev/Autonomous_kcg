cmake_minimum_required(VERSION 3.5)

### Export headers
project(additional_msgs)

# Generate messages
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TargetPoint.idl"
  "msg/CanPacket.idl"
  "msg/TrajectoryArray.idl"
  "msg/Friction.idl"


  DEPENDENCIES "std_msgs" "geometry_msgs" "sensor_msgs" "autoware_auto_msgs"
  ADD_LINTER_TESTS
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
