#!/usr/bin/env python

import rospy
import actionlib
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
from std_msgs.msg import String

# 목표 위치를 설정하는 함수
def send_goal(client, x, y, yaw):
    goal = MoveBaseGoal()
    goal.target_pose.header.frame_id = "map" 
    goal.target_pose.header.stamp = rospy.Time.now()

    # 목표 위치와 방향 설정
    goal.target_pose.pose.position.x = x
    goal.target_pose.pose.position.y = y
    goal.target_pose.pose.orientation.z = yaw
    goal.target_pose.pose.orientation.w = 1.0

    rospy.loginfo(f"Sending goal: x={x}, y={y}, yaw={yaw}")
    client.send_goal(goal)

    # 목표 도달 대기
    client.wait_for_result()
    result = client.get_result()
    if result:
        rospy.loginfo("Goal reached successfully!")
    else:
        rospy.logwarn("Failed to reach the goal.")

# 주문을 처리하는 콜백 함수
def order_callback(msg):
    order = msg.data.lower()  # 주문을 소문자로 변환
    rospy.loginfo(f"Received order: {order}")

    # 주문에 따라 위치 설정
    if order == "ramen":
        send_goal(client, x=1.0, y=2.0, yaw=0.0)  # 라면 위치
    elif order == "gogi":
        send_goal(client, x=3.0, y=4.0, yaw=0.0)  # 고기 위치
    else:
        rospy.logwarn(f"Unknown order: {order}")

if __name__ == "__main__":
    rospy.init_node("order_server")

    # move_base 액션 클라이언트 초기화
    client = actionlib.SimpleActionClient("move_base", MoveBaseAction)
    rospy.loginfo("Waiting for move_base action server...")
    client.wait_for_server()
    rospy.loginfo("Connected to move_base action server.")

    # order_menu 토픽 구독
    rospy.Subscriber("order_menu", String, order_callback)

    rospy.loginfo("Ready to receive orders...")
    rospy.spin()
