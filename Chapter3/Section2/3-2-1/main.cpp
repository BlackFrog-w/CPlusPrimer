/*
 * @Author: BlackFrog
 * @Date: 2022-07-10 15:59:47
 * @LastEditTime: 2022-07-10 16:19:58
 * @Description: 
 * string练习
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>
#include <string>

int main(int, char**) {

    // 构造方式
    std::string s1;
    std::string s2 = "hello, s2";
    std::string s3{"hello, s3"};
    std::string s4(4, 'a');

    std::string s5(s2);
    std::string s6 = s2;

    std::string s7("hello, s7");

    std::cout << "s3 is: " << s3 << std::endl;
    std::cout << "s7 is: " << s7 << std::endl;

    std::cout << "Hello, world!!!!\n";
}
