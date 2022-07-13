# Install script for directory: /home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/install/ros_g29_force_feedback")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ros_g29_force_feedback")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_c/ros_g29_force_feedback/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_typesupport_fastrtps_c/ros_g29_force_feedback/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_typesupport_fastrtps_cpp/ros_g29_force_feedback/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_typesupport_introspection_c/ros_g29_force_feedback/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_cpp/ros_g29_force_feedback/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_typesupport_introspection_cpp/ros_g29_force_feedback/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/libros_g29_force_feedback__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/install/ros_g29_force_feedback/lib/python3.8/site-packages/ros_g29_force_feedback/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/msg" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/msg/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback:/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback:/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback:/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:/opt/ros/foxy/lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/ros_g29_force_feedback/ros_g29_force_feedback_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_generator_py/ros_g29_force_feedback/libros_g29_force_feedback__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so"
         OLD_RPATH "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libros_g29_force_feedback__python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/msg" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_adapter/ros_g29_force_feedback/msg/ForceFeedback.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/msg" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/msg/ForceFeedback.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback" TYPE EXECUTABLE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/g29_force_feedback")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback"
         OLD_RPATH "/opt/ros/foxy/lib:/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros_g29_force_feedback/g29_force_feedback")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE DIRECTORY FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ros_g29_force_feedback")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ros_g29_force_feedback")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/environment" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_index/share/ament_index/resource_index/packages/ros_g29_force_feedback")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport.cmake"
         "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/CMakeFiles/Export/share/ros_g29_force_feedback/cmake/ros_g29_force_feedback__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback/cmake" TYPE FILE FILES
    "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_core/ros_g29_force_feedbackConfig.cmake"
    "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ament_cmake_core/ros_g29_force_feedbackConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_g29_force_feedback" TYPE FILE FILES "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/src/ros-g29-force-feedback/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/ros_g29_force_feedback__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/kcg/newSample/Autonomous_kcg/AlonBarak-Joy-workspaces/ros2_ws/build/ros_g29_force_feedback/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
