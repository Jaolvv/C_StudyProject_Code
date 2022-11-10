/*
 * @FilePath: \C\LabReport11_09\LabEX2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top
 * @Date: 2022-11-09
 * @Descripttion注释/说明:
 * 定义一个 4 * 4的二维数组并输入16个整形数据。
 * 按矩阵输出这16个数据，并输出主对角线元素
 * 以及这些元素的和
 */
#include <stdio.h>
int main()
{
    printf("请输入16个整型数据:\n");
    // 定义四行四列的二维数组，sum用于接收对角线元素的和
    int a[4][4], sum = 0;// sum要参与运算就得赋予初值
    //下面两个循环控制该矩阵为四行四列
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            // 接收用户输入的16个数据
            scanf("%d", &a[i][j]);

    printf("\n该数组矩阵为:\n");

    //找出主对角线元素
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            // %-3d意思是在输出项后面加上三个空格
            printf("%-3d ", a[i][j]);
            if (j == 3)
                printf("\n");
        }
    printf("\n主对角线的元素值分别为: ");

    //求主对角线元素的和
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (i == j)
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
    printf("\n主对角线的元素和为: %d", sum);
    return 0;
}