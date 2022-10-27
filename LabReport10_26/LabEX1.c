/*
 * @FilePath: \C\LabReport10_26\LabEX1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明:
 */
#include <stdio.h>
int main()
{
    char ch = 'A';  //定义开始字母
    int a, b;   //定义两个要循环的变量
    int n = 5;  // 定义一个n方便修改
    for (b = 1; b <= n; b++)    //Outer for 控制行
    {
        for (a = 1; a <= b; a++)    //Inner for 控制列
        {
            printf("%c", ch);   //打印字符
            ch++;   //增加列
        }
        printf("\n");   //Print enter
    }
    return 0;
}