/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目4 成绩等级
 * 说明：读入 0~100 的分数，先判断是否合法，再用 if / else if / else 多分支
 *       按 90/80/70/60 四个分界点输出 A~E 等级。
 * 编译：gcc -Wall -Wextra -std=c11 task4_grade.c -o task4_grade
 */

#include <stdio.h>

int main(void)
{
    int score;

    printf("请输入分数：");
    if (scanf("%d", &score) != 1)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
        return 1;
    }

    /* 先拦住非法分数，避免落到 else 里被当成 E 等级 */
    if (score < 0 || score > 100)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
    }
    else if (score >= 90)      /* 上界已在前面排除，这里只管 >= 90 */
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
