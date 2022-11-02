/*
 * @FilePath: \C\LoopPractice\ChickenRabbit.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-11-02
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 鸡兔同笼问题是我国古代著名趣题之一。
 * 大约在1500年前，《孙子算经》中就记载了这个有趣的问题。书中是这样描述的：
 * “今有雉兔同笼，上有三十五头，下有九十四足；问雉兔各几何？”
 * 这四句话的意思是；
 * 有若干只鸡兔同一个笼子里，从上面数，有35个头，从下面数，有94只脚。问笼中各有几只鸡和兔？
 */
#include <stdio.h>
int main()
{
    int Chicken, Rabbit;
    for (Chicken = 1; Chicken <= 35; Chicken++)
    {
        /* code */
        for (Rabbit = 1; Rabbit <= 35; Rabbit++)
        {
            /* code */
            if (Chicken + Rabbit == 35 && Chicken * 2 + Rabbit * 4 == 94)
            {
                /* code */
                printf("鸡有%d只,兔有%d只。\n",Chicken,Rabbit);
            }
        }
    }
    return 0;
}