/*
 * @FilePath: \C\HomeWork_1\EX2.c
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
    int c = 0, k = 3;
    switch (k)
    {
    default:
        c += k;
    case 2:
        c++;
        break;
    case 4:
        c += 2;
        break;
    }
    printf("%d\n", c);
    return 0;
}