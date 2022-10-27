/*
 * @FilePath: \C\LabReport10_26\Example3.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 输出0~100之间的素数
 */
#include <stdio.h>
#include <math.h> //为了引入sqrt求平方根函数
int main()
{
    int number, i;                             //定义变量
    for (number = 2; number < 1001; number++) //这个for循环主要是限制2-1000之间
    {
        for (i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0) //如果余数为0
                break;           //跳出当前循环
        }
        if (number % i != 0)        //如果求余不等于0，则为素数
            printf("%d\n", number); //输出素数
    }
    return 0; //函数返回值为0
}