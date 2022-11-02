/*
 * @FilePath: \C\LoopPractice\IsoscelesTriangle.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-11-02
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 从键盘输入任意整数n，输出对应高度为n的等腰三角形
 */
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Please Enter Triangle's Height:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            /* 打印空格 */
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            /* 打印等腰三角形 */
            printf("*");
        }
        printf("\n");
    }
    return 0;
}