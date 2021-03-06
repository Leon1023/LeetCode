/***************************************************************
*   Copyright (C) 2018 Leon1023 All rights reserved.
*
*   文件名称：hanming_distance_leon.c
*   创 建 者：leon
*   创建日期：2018年10月08日
*   描    述：
*
***************************************************************/
/**************************************************************
题目：
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ?   ?

The above arrows point to positions where the corresponding bits are different.

释义：

分析：
两个数的汉明距离，可以理解为，二进制的情况下，两个数异或之后的数的1的个数。
比如例子中，1和4,0001与0100异或得：0101，而0101中1的个数，即为汉明距离，可以理解位，从0001，变成0100，需要改变的位数。
***************************************************************/
int hamming_distance(int x,int y)
{
    int result = 0;
    /*get the temp result*/
    int temp = x^y;
    /*calc the 1 of temp result*/
    if (0 == temp){
        return 0;
    }
    while (temp != 0){
        result += (temp & 1);
        temp >>= 1;
    }
   return result;
}
