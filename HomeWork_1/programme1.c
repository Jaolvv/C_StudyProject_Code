/*
 * @FilePath: \C\HomeWork_1\programme1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.cnblogs.com/jaolvv
 * @Date: 2022-10-23
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 某邮局对邮寄包裹有如下规定：
 * 若包裹的 长 宽 高 任一尺寸超过 1m 或重量超过30kg，则不予邮寄；
 * 对可以邮寄的包裹每件收手续费2元
 */
#include <stdio.h>
int main()
{
    float len, wei, hei, wid, mon, r;
    printf("请输入待邮寄物品的长宽高及重量(kg)：\n");
    scanf("%f%f%f%f", &len, &wid, &hei, &wei);
    if (len > 1 || wid > 1 || hei > 1 || wei > 30)
        r = -1;
    else if (wei < 10)
        r = 0.85;
    else if (wei <= 20)
        r = 0.75;
    else if (wei <= 30)
        r = 0.7;
    if (r == -1)
        printf("邮寄物品参数不符合要求，不予邮寄！\n");
    else
    {
        mon = r + 2;
        printf("应付邮费为：%f\n", mon);
    }
    return 0;
}