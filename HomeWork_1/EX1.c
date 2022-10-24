/*
 * @FilePath: \C\HomeWork_1\EX1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-23
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明:
 */
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3, d = 0;
    if (a == 1 && b++ == 2)
        if (b != 2 || c-- != 3)
            printf("%d,%d,%d\n", a, b, c);
        else
            printf("%d,%d,%d\n", a, b, c);
    else
        printf("%d,%d,%d\n", a, b, c);
    return 0;
}