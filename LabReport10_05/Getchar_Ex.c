/*
 * @FilePath: \C\LabReport10_05\Getchar_Ex.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-05
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 从键盘输入BOY三个字符并输出
 * 1.用三个getchar函数先后从键盘向计算机输入BOY三个字符
 * 2.用putchar函数输出
 */
# include <stdio.h>
int main(){
    char a,b,c;
    a = putchar(getchar());
    b = putchar(getchar());
    c = putchar(getchar());
    putchar('\n');
    return 0;
}