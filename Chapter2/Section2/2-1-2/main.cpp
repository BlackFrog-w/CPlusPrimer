/*
 * @Author: BlackFrog
 * @Date: 2022-06-19 17:02:55
 * @LastEditTime: 2022-07-13 21:05:36
 * @Description: 
 * 有符号和无符号的转换
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>

int main(int, char**) {

    int a = 257;
    std::cout << "a is: " << a << std::endl;
    unsigned int b = a;
    std::cout << "b is: " << b << std::endl;

    char c = 'a';
    std::cout << "c is: " << c << std::endl;
    int d = c;
    std::cout << "d is: " << d << std::endl;

    char e = 257;
    std::cout << "e is: " << e << std::endl;

    // 'a' 转换为int值是97,97+158 = 255
    unsigned char f = c + 159;
    std::cout << "f is: " << f << std::endl;


    std::cout << "Hello, world!\n";
}
