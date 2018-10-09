/*
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。
示例 1:
输入: "III"
输出: 3

示例 2:
输入: "IV"
输出: 4

示例 3:
输入: "IX"
输出: 9

示例 4:
输入: "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.

示例 5:
输入: "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 分别将罗马字符转换成相对应的整数值*/
int rom2int(char *roman){
    switch (*roman){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
    }
}

/* 先将罗马字符串按字符逐个转换成整数并想相加，然后查看字符串中是否包含那6个
 * 特殊组合，如果包含则从总和sum中减去对应差。
 */
int romans_to_integer(char *romans){
    int sum=0;      /* result */
    int len=0;      /* the length of roman string */
    len = strlen(romans);

    for (int i=0; i<len; i++){
        sum += rom2int(romans+i);
    }

    if (strstr(romans,"IV")!=NULL)
        sum -= 2;
    if (strstr(romans,"IX")!=NULL)
        sum -= 2;
    if (strstr(romans,"XL")!=NULL)
        sum -= 20;
    if (strstr(romans,"XC")!=NULL)
        sum -= 20;
    if (strstr(romans,"CD")!=NULL)
        sum -= 200;
    if (strstr(romans,"CM")!=NULL)
        sum -= 200;
    return sum;
}

int main(void)
{
    char roma[50]={};
    gets(roma);
   printf("%d\n",romans_to_integer(roma));
   return 0;
}
