/*
 * @FilePath: \C\LoopPractice\BuyChicken.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-11-02
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 百钱买百鸡
 * 我国古代数学家张丘建在《算经》一书中曾提出过著名的“百钱买百鸡”问题，
 * 该问题叙述如下：鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，则翁、母、雏各几何？。
 */
#include <stdio.h>
int main()
{
    int x, y, z;
    for (x = 0; x <= 20; x++)
    {
        for (y = 0; y <= 33; y++)
        {
            z = 100 - x - y;
            if (x * 5 + y * 3 + z / 3 == 100 && z % 3 == 0)
            {
                printf("鸡翁%d只,鸡母%d只,鸡雏%d只。\n", x, y, z);
            }
        }
    }
    return 0;
}