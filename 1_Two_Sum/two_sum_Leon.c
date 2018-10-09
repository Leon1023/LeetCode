/****************************************************************************
*   Copyright: Leon1023 All rights reserved.
*
*   文件名称：two_sum_Leon.c
*   创 建 者：Leon1023
*   创建日期：2018年10月08日
*   描    述：给定一个整型数组和一个关键值（整数），通过调用函数在数组里寻找
*             两个数，且这两个数相加正好等于你给定的那个关键值。如果找到了函
*             数就返回这两个数在数组中的下标值，否则提示未找到并返回0。*
*   备    注:（1）假设每个给定的数组只能找到一组满足条件的结果，同时，不能使
*                 用同一个数两次。
*            （2）返回的结果放入一个动态分配的数组中，且由调用者自行释放。
*    Example:
*       Given nums = [2, 7, 11, 15], target = 9,
*       Because nums[0] + nums[1] = 2 + 7 = 9,
*       return [0, 1].
*
****************************************************************************/
#define Type    int /*the type of element in array*/

int* two_sum(Type *p_array, size_t array_size, Type key_value) {
    int i = 0;  /* loop counter */
    int j = 0;  /* loop counter */
    int* p_indic = NULL; /* the addr of array which store index of two element*/s

    if(NULL == p_array || array_size == 0)
    {
        perror("The array address is NULL,or wrong arg!");
        exit(1);
    }

    for (i = 0; i < array_size-1; i++){
        for (j = i+1; j < array_size; j++){
            if (*(p_array+i) + *(p_array+j) == key_value){
                if ((p_indic = (int*)calloc(2*sizeof(int),0)) == NULL){
                    perror("malloc failture!");
                    exit(2);
                }
                *p_indic = i;       /* the first element's index */
                *(p_indic+1) = j;   /* the second element's index */
                return p_indic;
            }
        }
    }
    return p_indic;
}
