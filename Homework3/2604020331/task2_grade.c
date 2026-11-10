/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目2 用 switch 重写成绩等级
 * 说明：switch 不能直接写范围，所以先用 score / 10 把分数折算成 0~10 的整数，
 *       再把这个整数当作分支条件。100 分得到 10，与 90~99 的 9 一起合并为 A。
 * 编译：gcc -Wall -Wextra -std=c11 task2_grade.c -o task2_grade
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

    /* 越界分数先拦掉，不让它进入 switch，否则 -1 会被算成 0 级当成 E */
    if (score < 0 || score > 100)
    {
        printf("输入错误：分数应在 0~100 之间。\n");
        return 1;
    }

    switch (score / 10)
    {
    case 10:            /* 100 分 */
    case 9:             /* 90~99 分：与 10 共用一段代码，故意不写 break */
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
    case 0:             /* 0~59 分统一为 E，同样是合并 case */
        printf("分数 %d，等级：E\n", score);
        break;
    default:            /* 理论上到不了这里，前面的范围校验已经拦住 */
        printf("输入错误：分数应在 0~100 之间。\n");
        break;
    }

    return 0;
}
