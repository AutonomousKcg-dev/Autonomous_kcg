cmake_minimum_required(VERSION 3.5)
project(cognata_sdk_ros2)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# find dependencies

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(common_interfaces REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

find_library(COGNATA CognataSDK libs/cognataSDKLibs REQUIRED)
find_library(COGNATA_PROTO CognataSDK_proto libs/cognataSDKLibs REQUIRED)
find_library(PROTO protobuf libs/cognataSDKLibs NO_DEFAULT_PATH REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AnnotationMsg.msg"
  "msg/BoundingBoxMsg.msg"
  "msg/CarTelemetriesMsg.msg"
  "msg/GPSAdditionalData.msg"
  "msg/ObjectDescription.msg"
  "msg/PedestrianMsg.msg"
  "msg/RadarOutputHeader.msg"
  "msg/RadarOutputTarget.msg"
  "msg/ROIAndDOGTOutput.msg"
  "msg/TrafficLightMsg.msg"
  "msg/VehicleMsg.msg"
  "msg/WheelMsg.msg"
  "msg/WheelTelemetries.msg"
  DEPENDENCIES std_msgs geometry_msgs common_interfaces
 )

add_executable(ROS2SDK src/ros_utility_funcs.cpp src/ros2_sample.cpp src/sensors.cpp src/main.cpp)

target_link_libraries(ROS2SDK
  ${COGNATA}
  ${COGNATA_PROTO} 
  ${PROTO} 
  pthread)

ament_target_dependencies(ROS2SDK 
  "rclcpp"
  "sensor_msgs"
  "geometry_msgs"
  "common_interfaces")

target_include_directories(ROS2SDK PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/SDKIncludes>
  $<INSTALL_INTERFACE:include>)

rosidl_target_interfaces(ROS2SDK
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS ROS2SDK
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
  )

ament_export_dependencies(rosidl_default_runtime)

ament_package()