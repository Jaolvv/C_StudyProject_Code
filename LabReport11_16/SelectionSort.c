/*
 * @FilePath: \C\LabReport11_16\SelectionSort.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-16
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 选择排序法
 * 实现用选择法对10个整数排序
 * 从后9个比较过程中，选择一个最小的与第一个元素交换，下次类推，即用第二个元素与后8个进行比较，并进行交换。
 */
#include <stdio.h>
#define N 10
int main()
{
    int i, j, min, tem, a[N];
    printf("Please Enter The 10 Number: \n");
    for (i = 0; i < N; i++)
    {
        /* 获取键盘输入的10个数 */
        scanf("%d", &a[i]);
    }
    //SelectionSort
    for (i = 0; i < N - 1; i++)
    {
        /* code */
        min = i;
        for (j = i + 1; j < N; j++)
        {
            /* code */
            if (a[min] > a[j])
            {
                /* code */
                min = j;
            }
            tem = a[i];
            a[i] = a[min];
            a[min] = tem;
        }
        printf("After SelectionSort: \n");
        for (i = 0; i < N; i++)
        {
            /* code */
            printf("%d ", a[i]);
        }
        printf("\n");
        return 0;
    }
}