/*
 * @FilePath: \C\LabReport10_12\LabEX1.c
 * @Author: Liu Xingyu
 * @WebSite: https://www.jaolvv.top/
 * @Date: 2022-10-12
 * @Version: 1.0
 * @Contact: 18423475135@163.com
 * @Descripttion注释/说明: 身高预测
 * 分别输入孩子的性别，父亲身高，母亲身高，是否爱运动，饮食规律来预测孩子的身高
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    //1. 定义变量 faHeight=父亲身高，moHeight=母亲身高，chHeight=孩子身高
    float faHeight, moHeight, chHeight;
    //2. 定义字符变量 sex sport diet
    char sex, sport, diet;
    //3. 使用getchar获取用户输入变量
    printf("请输入孩子性别M(m)W/(w):");
    sex = getchar();
    //4. 打印用户的输入
    printf("请输入父亲身高：");
    scanf("%f", &faHeight);

    printf("请输入母亲身高：");
    scanf("%f", &moHeight);

    printf("是否喜欢运动(Y/N):");
    scanf(" %c",&sport);

    printf("饮食是否健康(Y/N):");
    scanf(" %c", &diet);

    //5. 判断条件
    if (sex == 'M' || sex == 'm'){
        //如果用户输入的值是M或者m，就执行这里的公式
        chHeight = (faHeight + moHeight) * 0.54;
    }else if (sex == 'W' || sex =='w'){
        //如果用户输入的值是W或者w，就执行这里的公式
        chHeight = (faHeight * 0.923 + moHeight) / 2;
    }else{
        // 如果用户输入的既不是W(w)或者M(m)，则提示用户输入错误
        printf("请正确输入性别M或W(不区分大小写)");
    }
    // 判断是否爱运动，是就执行公式
    if (sport == 'Y' || sport == 'y'){
        chHeight *= 1.02;
    }
    //判断饮食是否健康，就是执行公式
    if (diet == 'Y' || diet == 'y'){
        chHeight *= 1.015;
    }

    // 6. 输出预测身高结果
    printf("预测身高为:%.2f\n",chHeight);
    system("pause");    // Press any key to continue 按任意键继续
    return 0;
}