/*
 * @FilePath: \C\LabReport10_19\ManagementSystem.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-19
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 使用循环结构模拟一个 “工资管理系统”
 * 本实例执行时将循环显示菜单， 并提示用户选择输入要执行的菜单命令， 直到用户输入 6 退出程序
 * 程序在执行时，先显示选项菜单，提示用户输入1-6选择选项，再通过switch语句选择执行相应的功能语句。
 * 从switch语句中退出后，对条件进行检查，如果为真，则继续循环；反之退出程序
 *
 * (2)如何将该程序改写为while语句？
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    do
    {
        // system("cls");  //清除屏幕(#include <stdlib.h>)
        printf("\t---------工资管理系统--------\n");
        printf("\t-        1.查询员工信息     -\n");
        printf("\t-        2.添加员工信息     -\n");
        printf("\t-        3.删除员工信息     -\n");
        printf("\t-        4.修改员工信息     -\n");
        printf("\t-        5.员工信息总览     -\n");
        printf("\t-        6.退出员工系统     -\n");
        printf("\t-----------------------------\n");
        printf("请输入选项1——6：");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("执行了查询员工信息命令。\n");
            break;
        case 2:
            printf("执行了添加员工信息命令。\n");
            break;
        case 3:
            printf("执行了删除员工信息命令。\n");
            break;
        case 4:
            printf("执行了修改员工信息命令。\n");
            break;
        case 5:
            printf("执行了员工信息总览命令。\n");
            break;
        case 6:
            printf("已退出员工系统。\n");
            break;
        default:
            printf("输入错误！\n");
            break;
        }
    } while (n != 6);
}