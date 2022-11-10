/*
 * @FilePath: \C\LabReport11_09\LabEX3.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-09
 * @Descripttion注释/说明:
 * 输入十个字符，然后将输入的字符输出显示，统计其中大写字母的个数，并将结果输出。
 */
#include <stdio.h>
int main()
{
    char a[10];
    int sum = 0;
    printf("请输入10个字符：");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &a[i]);
        // A-Z 的Ascii码（65 - 90）
        // 所以大于等于65，小于等于90的都是大写字母
        if (a[i] >= 65 && a[i] <= 90)
        {
            sum++;
        }
    }
    printf("输出显示为：\n%s", a);
    printf("大写字母有 %d 个", sum);
    return 0;
}
