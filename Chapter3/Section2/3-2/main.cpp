/*
 * @Author: BlackFrog
 * @Date: 2022-07-13 22:31:49
 * @LastEditTime: 2022-07-14 09:15:52
 * @Description: 
 * 
 * string源码解析
 * https://developer.51cto.com/article/624762.html
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>
#include <string>


int main(int, char**) {

    std::string str = "string";
    // size_type类型
    std::string::size_type n = str.size();

    // 范围for语句
    for(auto c : str) {
        std::cout << c << std::endl;
    }

    for(char &c : str) {
        c = toupper(c);
        std::cout << c << std::endl;
    }

    std::cout << str << std::endl;

    



    std::cout << "Hello, world!\n";
}
