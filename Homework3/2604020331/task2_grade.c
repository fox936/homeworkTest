/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目2 成绩等级判定（switch 实现）
 * 说明：读入 0~100 的分数，先做范围校验，
 *       再用 switch (score / 10) 把分数折算成 0~10 的整数，映射为 A~E 等级。
 *       90~100 的 score/10 是 9 或 10，要让这两个 case 落到同一段代码。
 * 编译：gcc -Wall -std=c11 task2_grade.c -o task2_grade
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

    /* 越界的分数不进入 switch，直接报错，避免落到 default 里被当成 E */
    if (score < 0 || score > 100)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
        return 1;
    }

    switch (score / 10)
    {
    case 10:            /* 100 分 */
    case 9:             /* 90~99 分，与 100 分同为 A，落空不写代码即可共享 */
        printf("分数 %d，等级：A\n", score);
        break;
    case 8:
        printf("分数 %d，等级：B\n", score);
        break;
    case 7:
        printf("分数 %d，等级：C\n", score);
        break;
    case 6:
        printf("分数 %d，等级：D\n", score);
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:             /* 0~59 分统一为 E */
        printf("分数 %d，等级：E\n", score);
        break;
    default:
        printf("输入错误：分数应在 0~100 之间。\n");
        break;
    }

    return 0;
}
