/*
 * @FilePath: \C\LabReport10_26\LabEX3.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 输出所有三位的水仙花数
 * 水仙花数：指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。
 */
#include <stdio.h>
int main()
{
    int num;
    int a, b, c;
    printf("水仙花数为：");
    for (num = 100; num <= 999; num++)
    {
        a = num / 100;
        b = num / 10 % 10;
        c = num % 10;
        if (num == a * a * a + b * b * b + c * c * c)
            printf("%d ", num);
    }
}