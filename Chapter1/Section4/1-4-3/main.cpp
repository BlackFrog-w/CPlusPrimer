/*
 * @Author: BlackFrog
 * @Date: 2022-05-29 22:59:54
 * @LastEditTime: 2022-05-30 23:08:53
 * @Description: 
 * 读取不定数量的数字，求累加和
 * windows环境结束输入为： ctrl + z
 * Copyright (c) 2022 by BlackFrog, All Rights Reserved. 
 */
#include <iostream>

int main(int, char**) {
    int sum = 0, value = 0;
    while(std::cin >> value) {
        sum += value;
    }
    std::cout << "sum is: " << sum << std::endl;
    return 0;
}
