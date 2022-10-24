/*
 * @FilePath: \C\HomeWork_1\CodeCompletion2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-23
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 以下程序根据输入的三条边判断是否能构成三角形
 * 若能构成三角形则输出它的面积和三角形类型
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("输入三角形的三边(用逗号隔开):\n");
    scanf("%f,%f,%f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为：%f\n", area);
        if (a == b && a == c && b == c)
            printf("等边三角形\n");
        else if (a == b || a == c || b == c)
            printf("等腰三角形\n");
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
            printf("直角三角形\n");
        else
            printf("普通三角形");
    }
    else
        printf("不能组成三角形!\n");
    return 0;
}