#include <ros/ros.h>
#include <std_msgs/String.h> 
#include <stdio.h>
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Vector3Stamped.h"
#include </home/mahesh/catkin_ws/src/beginner_tutorials/src/Qualisys.h>

int main(int argc, char **argv)
{
   ros::init(argc, argv, "data_to_vision_3");
   ros::NodeHandle n;

   ros::Publisher chatter_pub = n.advertise<geometry_msgs::PoseStamped>("/mavros/vision_pose/pose",100);
   ros::Rate loop_rate(10);

   geometry_msgs::PoseStamped msg;
   int count = 1;
   	
   PositionReciever qp;
   Body some_object;
   qp.connect_to_server();
 
 	   while(ros::ok()){
	   some_object = qp.getStatus();
		// some_object.print();
		printf("%f\n",some_object.position_x);
       msg.header.stamp = ros::Time::now();
       msg.header.seq=count;
       msg.header.frame_id = "local_origin";
       msg.pose.position.x = 0.001*some_object.position_x;
       msg.pose.position.y = 0.001*some_object.position_y;
       msg.pose.position.z = 0.001*some_object.position_z;
       msg.pose.orientation.x = 0.1;
       msg.pose.orientation.y = 0.2;
       msg.pose.orientation.z = 0.3;
       msg.pose.orientation.w = 0.4;

       chatter_pub.publish(msg);
       ros::spinOnce();
       count++;
       loop_rate.sleep();
   }
       
   return 0;
}
