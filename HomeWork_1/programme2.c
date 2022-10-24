/*
 * @FilePath: \C\HomeWork_1\programme2.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-23
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 将输入的百分制成绩输出相对应的等级
 * 90以上为A；81-89为B；70-79为C；60-69为D；60以下为E
 * 使用三种循环结构
 */
#include <stdio.h>
int main()
{
	int a;
	printf("请输入成绩：");
	scanf("%d", &a);
	if (a >= 90 && a <= 100)
		printf("等级是A\n");
	else if (a >= 80 && a <= 89)
		printf("等级是B\n");
	else if (a >= 70 && a <= 79)
		printf("等级是C\n");
	else if (a >= 60 && a <= 69)
		printf("等级是D\n");
	else if (a >= 0 && a <= 59)
		printf("等级是E\n");
	else if (a < 0)
		printf("输入错误，请输入1~100的成¦绩");
	getchar();
	return 0;
}
