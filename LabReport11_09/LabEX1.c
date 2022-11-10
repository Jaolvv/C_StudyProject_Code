/*
 * @FilePath: \C\LabReport11_09\LabEX1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-09
 * @Descripttion注释/说明:
 * 输入10个元素
 * 组成一堆数组。求该数组的第五个数，最大值，最小值以及总和
 */
#include <stdio.h>
int main()
{
    int a[10];
    printf("Please Enter 10 Number:\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    // 定义求和，最大值和最小值容器
    int max = a[0], min = a[0];
    int sum = 0;
    //求最大值循环
    for (int i = 0; i < 10; i++)
    {
        /* 比较大小 */
        if (a[i] > max)
        {
            /* 最大值赋给a[i] */
            max = a[i];
        }
    }
    // 求最小值循环
    for (int i = 0; i < 10; i++)
    {
        /* 比较大小 */
        if (a[i] < min)
        {
            /* 最小值赋给a[i] */
            min = a[i];
        }
    }
    //求和
    for (int i = 0; i < 10; i++)
    {
        /* 求值结果赋给a[i] */
        sum += a[i];
    }
    printf("\n该数组的第五个元素为：%d\n", a[4]);
    printf("该数组最大元素为： %d\n", max);
    printf("该数组最小元素为： %d\n", min);
    printf("该数组的和为：%d", sum);
}