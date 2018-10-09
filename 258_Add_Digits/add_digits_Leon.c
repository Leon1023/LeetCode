/***************************************************************
*   Copyright (C) 2018 Leon1023 All rights reserved.
*
*   文件名称：add_digits_Leon.c
*   创 建 者：leon
*   创建日期：2018年10月08日
*   描    述：
*
***************************************************************/
/*************************************************************
题目：
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

释义：
计算各位数之和，直到最后只有一位。

分析：
计算各位数之和，采用递归，计算一次后，再次调用，直到结果位各位数。
*************************************************************/
#include <stdio.h>
unsigned int add_digits(unsigned int const num)
{
    unsigned int temp = num;
    unsigned int sum=0;
    if (temp < 10){
        return temp;
    }
    else{
        while (temp>9)
        {
            sum += temp%10;
            temp /= 10;
        }
        sum += temp;
        return  add_digits(sum);
    }
}

int main(void)
{
    printf("%d\n",add_digits(348));
    return 0;
}
