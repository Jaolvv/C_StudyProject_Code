/*
 * @FilePath: \C\LabReport10_26\Example2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 99乘法表
 * 两个for循环的嵌套
 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++) // Outer for
    {
        for (j = 1; j <= i; j++) //Inner for
        {
            printf("%d*%d = %d ", i, j, i * j); //输出结果，%2d控制宽度为两个字符，且向右对齐
        }
        printf("\n");
    }
    return 0;
}