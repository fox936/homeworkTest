/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目4 成绩等级判断
 * 说明：读入 0~100 的分数，按 90/80/70/60 四个分界点输出 A~E 等级；
 *       分数超出 0~100 时提示输入错误，不参与评级。
 * 编译：gcc -Wall -std=c11 task4_grade.c -o task4_grade
 */

#include <stdio.h>

int main(void)
{
    int score;

    printf("请输入分数（0~100）：");
    if (scanf("%d", &score) != 1)
    {
        printf("输入错误：分数必须是一个整数。\n");
        return 1;
    }

    /* 先判断非法输入，再逐级判断等级：顺序从高到低，命中即结束 */
    if (score < 0 || score > 100)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
    }
    else if (score >= 90)
    {
        printf("分数 %d，等级：A\n", score);
    }
    else if (score >= 80)
    {
        printf("分数 %d，等级：B\n", score);
    }
    else if (score >= 70)
    {
        printf("分数 %d，等级：C\n", score);
    }
    else if (score >= 60)
    {
        printf("分数 %d，等级：D\n", score);
    }
    else
    {
        printf("分数 %d，等级：E\n", score);
    }

    return 0;
}
