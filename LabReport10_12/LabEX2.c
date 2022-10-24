/*
 * @FilePath: \C\LabReport10_12\LabEX2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top/
 * @Date: 2022-10-12
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 输入一个字符，判别它是否为小写字母，
 * 如果是，将它转换成大写字母；如果不是，不转换。然后输出最后得到的字符。（用条件运算符完成）
 */
#include <stdio.h>
int main()
{
    char getChar;
    printf("输入一个字符：");
    scanf("%c", &getChar);
    if (getChar >= 'A' && getChar <= 'Z')
    {
        getChar += 32;
        printf("检测到为大写！它的小写字母是：%c\n", getChar);
    }
    else if (getChar >= 'a' && getChar <= 'z')
    {
        getChar -= 32;
        printf("检测到为小写！它的大写字母是：%c\n", getChar);
    }
    else
    {
        printf("请正确输入A-Z或a-z");
    }
}