/*
 * @FilePath: \C\LabReport11_16\InsertSort.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-11-16
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 插入排序
 */
#include <stdio.h>
#define N 10
int main()
{
    int a[N], i, j, t;
    printf("Please enter the ten integer: \n");
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < N; ++i)
    {
        t = a[i];
        for (j = i - 1; j > -1 && a[j] > t; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = t;
    }
    printf("After InsertSort:\n");
    for (i = 0; i < N; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}