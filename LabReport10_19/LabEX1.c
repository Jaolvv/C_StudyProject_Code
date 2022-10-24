/*
 * @FilePath: \C\LabReport10_19\LabEX1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-19
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明:
 */
#include <stdio.h>
#define PI 3.1415926 //宏定义PI值
int main(){
    double r, v, s;
    printf("输入球的半径：");
    scanf("%lf", &r);
    s = 4 * PI * r * r;         //表面积
    v = 4 * PI * r * r * r / 3; //体积
    printf("圆球表面积为%.2f,圆球的体积为%.2f", s, v);
    return 0;
}