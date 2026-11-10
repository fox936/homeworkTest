/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目5 闰年判断
 * 说明：读入一个年份，按闰年规则判断：
 *       能被 4 整除但不能被 100 整除，或者能被 400 整除，就是闰年。
 * 编译：gcc -Wall -std=c11 task5_leap.c -o task5_leap
 */

#include <stdio.h>

int main(void)
{
    int year;

    printf("请输入年份：");
    if (scanf("%d", &year) != 1)
    {
        printf("输入错误：年份必须是一个整数。\n");
        return 1;
    }

    if (year <= 0)
    {
        printf("输入错误：年份应为正整数。\n");
        return 1;
    }

    /* 两个条件用 || 连接：普通闰年 或 世纪闰年 */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d 年是闰年，共有 366 天。\n", year);
    }
    else
    {
        printf("%d 年不是闰年，共有 365 天。\n", year);
    }

    return 0;
}
