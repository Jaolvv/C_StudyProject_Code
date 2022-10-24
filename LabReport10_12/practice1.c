/*
 * @FilePath: \C\LabReport10_12\practice1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-12
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 判断年份是否是闰年
 */
#include <stdio.h>
int main()
{
    int year;

    printf("输入年份: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            // 这里如果被 400 整数是闰年
            if (year % 400 == 0)
                printf("%d 是闰年", year);
            else
                printf("%d 不是闰年", year);
        }
        else
            printf("%d 是闰年", year);
    }
    else
        printf("%d 不是闰年", year);

    return 0;
}