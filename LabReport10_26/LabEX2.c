/*
 * @FilePath: \C\LabReport10_26\LabEX2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 倒着输出99乘法表
 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++) //Outer for
    {
        for (j = 1; j <= 9; j++) //Inner for
        {
            if (j >= i)
                printf("%d*%d=%2d  ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}