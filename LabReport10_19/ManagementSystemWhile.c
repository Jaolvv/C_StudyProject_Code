/*
 * @FilePath: \C\LabReport10_19\ManagementSystemWhile.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-19
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 将ManagementSystem改为While语句的写法
 */
#include <stdio.h>
int main()
{
    int n;
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
    while (n <= 6)
    {
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
    }
}