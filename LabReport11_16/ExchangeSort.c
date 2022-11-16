/*
 * @FilePath: \C\LabReport11_16\ExchangeSort.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-16
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 交换排序法
 */
#include <stdio.h>
#define N 10
int main()
{
    int a[N], i, j, t;
    printf("Please enter the ten integer: \n");
    for (i = 0; i < N; i++)
    {
        /* 获取键盘输入的10个数 */
        scanf("%d", &a[i]);
    }
    // ExchangeSort
    for (i = 0; i < N; i++)
    {
        /* code */
        for (j = i + 1; j < N; j++)
        {
            /* 比较大小 */
            if (a[i] > a[j])
            {
                /* 交换 */
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("After ExchangeSort:\n");
    for (i = 0; i < N; i++)
    {
        /* 打印数组 */
        printf("%d\t", a[i]);
    }
    putchar('\n');
    return 0;
}