/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目5 闰年判断
 * 说明：读入一个年份，用 && 和 || 把闰年规则写成一个条件：
 *       能被 4 整除且不能被 100 整除，或者能被 400 整除。
 * 编译：gcc -Wall -Wextra -std=c11 task5_leap.c -o task5_leap
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

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d 是闰年。\n", year);
    }
    else
    {
        printf("%d 不是闰年。\n", year);
    }

    return 0;
}
