// 包含rclcpp头文件-ros client layer c++
#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv){
    // 调用rclcpp的初始化函数
    rclcpp::init(argc, argv);
    // 调用rclcpp的循环以运行创建的节点
    rclcpp::spin(std::make_shared<rclcpp::Node>("first_node"));
    return 0;
}