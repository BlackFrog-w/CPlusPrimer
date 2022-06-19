/*
 * @Author: BlackFrog
 * @Date: 2022-06-19 17:28:30
 * @LastEditTime: 2022-06-19 17:44:35
 * @Description: 
 * 变量定义
 * 赋值和初始化是两个完全不同的操作
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>

int main(int, char**) {
    
    //初始化的方式
    int a = 0;
    int b = (1);
    int c = {2};
    int d(3);
    int e{4};
    std::cout << a << b << c << d << e << std::endl;

    //编译可以通过，但是会提示warning
    //warning: narrowing conversion of 'ld' from 'long double' to 'int' inside { } [-Wnarrowing]
    long double ld = 3.1415926436;
    int lla{ld}, llb = {ld};
    int llc(ld), lld = ld;

    std::cout << "Hello, world!\n";
}
