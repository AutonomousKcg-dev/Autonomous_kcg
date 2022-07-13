cmake_minimum_required(VERSION 3.5)
project(idan_driver)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(${PROJECT_NAME} SHARED
		#src/can_communication_titan/can_communication_node.cpp
		#src/can_communication_titan/titan_can.cpp
		#src/can_communication_titan/can_communication_lib.cpp

		#include/can_communication_titan/can_communication.hpp
		include/can_communication_titan/LinuxCAN_API.h
		include/can_communication_titan/titan_can.hpp

		src/listener/listener.cpp
		#src/listener/listener_lib.cpp
		include/listener/listener.hpp


		include/sender/sender.hpp

)

autoware_set_compile_options(${PROJECT_NAME})
target_compile_options(${PROJECT_NAME} PRIVATE
  -Wno-useless-cast -Wno-double-promotion -Wno-old-style-cast -Wno-sign-conversion -Wno-unused-variable -Wno-unused-parameter -Wno-format -Wno-unused-value -Wno-unused-but-set-variable) 

ament_auto_add_executable(can_communication_titan_exe 
		src/can_communication_titan/can_communication_node.cpp
		src/can_communication_titan/titan_can.cpp
		#src/can_communication_titan/can_communication_lib.cpp
		#include/can_communication_titan/can_communication.hpp
		include/can_communication_titan/LinuxCAN_API.h
		include/can_communication_titan/titan_can.hpp
)
ament_target_dependencies(can_communication_titan_exe rclcpp std_msgs additional_msgs )
target_link_libraries(can_communication_titan_exe ${CMAKE_CURRENT_SOURCE_DIR}/lib/libLinuxCAN_API.a)
#libLinuxCAN_API
#libLinuxCAN_API_x64
ament_auto_add_executable(listener_exe
		src/listener/listener.cpp
		src/listener/listener_lib.cpp
		include/listener/listener.hpp
)
ament_target_dependencies(listener_exe rclcpp std_msgs autoware_auto_msgs additional_msgs)

ament_auto_add_executable(sender_exe
		src/sender/sender.cpp
		src/sender/sender_lib.cpp
		include/sender/sender.hpp
)
ament_target_dependencies(sender_exe rclcpp std_msgs autoware_auto_msgs additional_msgs)
ament_auto_package(
  INSTALL_TO_SHARE
  launch
)
