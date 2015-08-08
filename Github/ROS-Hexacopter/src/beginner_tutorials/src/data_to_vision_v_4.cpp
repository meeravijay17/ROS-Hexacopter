#include <ros/ros.h>
#include <std_msgs/String.h> 
#include <stdio.h>
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Vector3Stamped.h"
//#include </home/mahesh/catkin_ws/src/beginner_tutorials/src/Qualisys.h>

int main(int argc, char **argv)
{
   ros::init(argc, argv, "data_to_vision_v_4");
   ros::NodeHandle n;

   ros::Publisher chatter_pub = n.advertise<geometry_msgs::Vector3Stamped>("/mavros/vision_speed/speed_vector",100);
   ros::Rate loop_rate(10);

   geometry_msgs::Vector3Stamped msg;
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
       msg.vector.x = 1;//0.001*some_object.position_x;
       msg.vector.y = 2;//0.001*some_object.position_y;
       msg.vector.z = .2;//0.001*some_object.position_z;
       //msg.pose.orientation.x = 0;
       //sg.pose.orientation.y = 0;
       //msg.pose.orientation.z = 0;
       //msg.pose.orientation.w = 1;

       chatter_pub.publish(msg);
       ros::spinOnce();
       count++;
       loop_rate.sleep();
   }
   
      
   return 0;
}
