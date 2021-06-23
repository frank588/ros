#include "ros/ros.h" //ros.h 包含ros程序常用的头文件。
#include "std_msgs/String.h" //ros 内置字符串数据类型。

//回调函数定义，参数类型需要与所订阅的消息类型保持一致
void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener"); //初始化ros，并命令节点名。
  ros::NodeHandle n; //初始化节点，调用ros api接口句柄
  ros::Subscriber sub = n.subscribe("chatter",1000,chatterCallback);
  ros::spin();//no return func,
  return 0;
}