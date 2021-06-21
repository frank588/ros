#include "ros/ros.h"  //head file, must

int main(int argc, char **argv)
{
   ros::init(argc,argv,"hello_world"); // init ros, name a node, must
   ros::NodeHandle n;                   //init ros_node, call ros api , not a must

   ROS_INFO("hello world..");           //print word
   ros::spin();                         //process all call-back func, not must
   return 0;                           //return word.


}
