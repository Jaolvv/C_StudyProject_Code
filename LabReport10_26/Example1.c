/*
 * @FilePath: \C\LabReport10_26\Example1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-26
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 输出一个4*5的矩阵
 * 用循环的嵌套来处理此问题，用外循环来输出一行数据，用内循环来输出一列数据。
 * 要注意设法输出矩阵的格式，即每输出完5个数据后换行。
 */
#include <stdio.h>
int main()
{
    int i, j;
    int temp = 0;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j < 6; j++, temp++)
        {
            if (temp % 5 == 0)
            {
                printf("\n");
            }
            printf("%d\t", i * j);
        }
    }
    return 0;
}