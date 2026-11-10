/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目4 年月天数计算
 * 说明：读入年份和月份，用 switch 按月份分支求出当月天数。
 *       大月 31 天、小月 30 天直接给出；2 月再用闰年规则单独判断 28 或 29 天。
 * 编译：gcc -Wall -std=c11 task4_days.c -o task4_days
 */

#include <stdio.h>

int main(void)
{
    int year, month, days;

    printf("请输入年份和月份（用空格分隔）：");
    if (scanf("%d %d", &year, &month) != 2)
    {
        printf("输入错误：请输入两个整数，例如 2026 2。\n");
        return 1;
    }

    if (year <= 0 || month < 1 || month > 12)
    {
        printf("输入错误：年份应为正数，月份应在 1~12 之间。\n");
        return 1;
    }

    /* 多个 case 共用一段代码，就能把同天数的月份合并在一起 */
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        /* 2 月要看是不是闰年 */
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        days = 0;       /* 前面的范围校验已经拦住非法月份，这里只作兜底 */
        break;
    }

    if (month == 2)
    {
        printf("%d 年 2 月有 %d 天（%s）。\n",
               year, days, days == 29 ? "闰年" : "平年");
    }
    else
    {
        printf("%d 年 %d 月有 %d 天。\n", year, month, days);
    }

    return 0;
}
