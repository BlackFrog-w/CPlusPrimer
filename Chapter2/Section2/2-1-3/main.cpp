/*
 * @Author: BlackFrog
 * @Date: 2022-06-19 17:19:42
 * @LastEditTime: 2022-06-19 17:25:44
 * @Description: 
 * double、float、long double类型的取值范围是什么呢？在内存当中又是如何存储的呢？
 * 浮点数可以做移位运算吗？
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>

int main(int, char**) {


    auto a = 3.14F;
    std::cout << "a size is: " << sizeof(a) << std::endl;
    auto b = 3.14;
    std::cout << "b size is: " << sizeof(b) << std::endl;
    auto c = 3.14L;
    std::cout << "c size is: " << sizeof(c) << std::endl;

    std::cout << "Hello, world!\n";
}
