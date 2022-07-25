# Defining the cmake vesrion and project name
cmake_minimum_required(VERSION 2.8.3)
project(idan_control_example)

# compiling the code with c++11
add_compile_options(-std=c++11)

# Finding the packages required (dependencies for this package)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  can_msgs
  roslint
)

# Declaring the dependencies for packages that depend on this package.
catkin_package(
  CATKIN_DEPENDS roscpp can_msgs std_msgs rospy
  INCLUDE_DIRS include
  LIBRARIES ros_${PROJECT_NAME}
)

# Add the given directories to those the compiler uses to search for include files. 
# So nothing but giving the location of the include files
include_directories(
  include 
  ${catkin_INCLUDE_DIRS}
  
)

# Adding the executable files for the build
add_executable(ariel_idan_node src/idan.cpp src/idan_node.cpp)

# linking the libraries for successful binary genertion
target_link_libraries(ariel_idan_node
  ${catkin_LIBRARIES}
)