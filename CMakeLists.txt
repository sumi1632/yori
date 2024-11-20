cmake_minimum_required(VERSION 3.0.2)
project(yori)

## 찾을 ROS 패키지 선언
find_package(catkin REQUIRED COMPONENTS
  rospy
  std_msgs
  sensor_msgs
  geometry_msgs
  nav_msgs
  tf
  move_base
  amcl
  map_server
  joint_state_publisher
  robot_state_publisher
  rviz
  roslaunch
)

## catkin 패키지 설정
catkin_package(
  CATKIN_DEPENDS rospy std_msgs sensor_msgs geometry_msgs nav_msgs tf move_base amcl map_server joint_state_publisher robot_state_publisher rviz
)

## ROS 파이썬 파일과 URDF 파일을 위한 경로 설정
install(DIRECTORY launch urdf map rviz param
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

