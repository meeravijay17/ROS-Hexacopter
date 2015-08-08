#include <ros/ros.h>
#include <std_msgs/String.h> 
#include <stdio.h>
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Vector3Stamped.h"
#include "geometry_msgs/TwistStamped.h"

//#include </home/mahesh/catkin_ws/src/beginner_tutorials/src/Qualisys.h>

int main(int argc, char **argv)
{
   ros::init(argc, argv, "data_to_setpoint_v_4");
   ros::NodeHandle n;

   ros::Publisher chatter_pub = n.advertise<geometry_msgs::TwistStamped>("/mavros/setpoint_velocity/cmd_vel",100);
   ros::Rate loop_rate(10);

   geometry_msgs::TwistStamped msg;
   int count = 1;
   
  

	
		//PositionReciever qp;
		//Body some_object;
		//qp.connect_to_server();

	
   while(ros::ok()){
	   //some_object = qp.getStatus();
		// some_object.print();
		//printf("%f\n",some_object.position_x);
       msg.header.stamp = ros::Time::now();
       msg.header.seq=count;
       msg.header.frame_id = 1;
       msg.twist.linear.x = 0.1;//0.001*some_object.position_x;
       msg.twist.linear.y = 0.2;//0.001*some_object.position_y;
       msg.twist.linear.z = 1;//0.001*some_object.position_z;
       msg.twist.angular.x = 0.1;
       msg.twist.angular.y = 0.1;
       msg.twist.angular.z = 0.1;
       
       chatter_pub.publish(msg);
       ros::spinOnce();
       count++;
       loop_rate.sleep();
   }
   
      
   return 0;
}
