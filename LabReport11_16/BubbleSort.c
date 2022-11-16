/*
 * @FilePath: \C\LabReport11_16\BubbleSort.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-16
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明:冒泡排序法
 * 冒泡原理：从左到右，相邻元素进行比较。
 * 每次比较一轮，就会找到序列中最大的一个或最小的一个。这个数就会从序列的最右边冒出来。
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
    // BubbleSort
    for (j = 0; j < 9; j++)
        for (i = 0; i < 9 - j; i++)
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
    printf("After BubbleSort:\n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}