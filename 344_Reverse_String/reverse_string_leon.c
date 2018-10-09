/***************************************************************
*   Copyright (C) 2018 Leon1023 All rights reserved.
*
*   文件名称：reverse_string_leon.c
*   创 建 者：leon
*   创建日期：2018年10月08日
*   描    述：向函数传入一个字符串指针，函数将该指针所指字符串逆序存储。
*
***************************************************************/
/**************************************************************
344 Reverse String
题目：
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
释义：
字符串翻转
分析
利用一个临时字符变量作为交换场所，将头尾对应位置的字符位置调换。
***************************************************************/

char* reverse_string(char* s)
{
    char temp;  
    char *rear = NULL;  /*Pointer to the last char  of the string*/
    int i,j;
    int len;            /* The length of the string */
    
    if (NULL == s)
        return s;

    len = strlen(s);
    i = 0;              /* counter */
    j = len/2;          /* max times of exchange */
    rear = s+len-1;     /* the last char pointer of the string */

    while (i < j){
       temp =  *(s+i);
       *(s+i) = *(rear-i);
       *(rear-i) = temp;
       i++;
    }
    return s;
}

