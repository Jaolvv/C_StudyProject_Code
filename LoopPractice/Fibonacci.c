/*
 * @FilePath: \C\LoopPractice\Fibonacci.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-11-02
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 斐波那契数列
 * 求斐波那契数列的前20个数，这个数列有如下特点：
 * 第1 2两个数为 1 1，从第三个数开始，该数是其前面两个数之和
 * (1,1,2,3,5,8,13,21,34,55,89....)
 */
#include <stdio.h>
int main()
{
    int x1 = 1, x2 = 1, i;
    for (i = 1; i <= 10; i++)
    {
        /* code */
        printf("%d,%d\n", x1, x2);
        x1 = x1 + x2;
        x2 = x2 + x1;
    }
    return 0;
}