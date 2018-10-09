/***************************************************************
*   Copyright (C) 2018 Leon1023 All rights reserved.
*
*   文件名称：476_number_complement.c
*   创 建 者：leon
*   创建日期：2018年10月09日
*   描    述：
*
***************************************************************/
/*************************************************************
题目：
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Note:
The given integer is guaranteed to fit within the range of a 32-bit signed integer.
You could assume no leading zero bit in the integer’s binary representation.
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

释义：
给定一个正整数，输出它的补全整数。补全策略是翻转它的每个比特位，得到补全整数。

分析：

对于求某非负整数的补全，就是用其与相等位数的全1数的异或。
**************************************************************/

unsigned int find_complement(unsigned int num) 
{
    unsigned int temp,base=1;

    for (temp=num/2; temp!=0; temp/=2)
            base = (base<<1)|1;

    return (num ^ base);
}
