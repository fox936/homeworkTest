/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目4 年月天数
 * 说明：读入年份和月份，用 switch (month) 并合并 case 求当月天数；
 *       2 月再配合 if 判断闰年，得 29 或 28 天。
 * 编译：gcc -Wall -Wextra -std=c11 task4_days.c -o task4_days
 */

#include <stdio.h>

int main(void)
{
    int year, month, days;

    printf("请输入年份和月份：");
    if (scanf("%d %d", &year, &month) != 2)
    {
        printf("输入错误：月份应在 1~12 之间。\n");
        return 1;
    }

    if (month < 1 || month > 12)
    {
        printf("输入错误：月份应在 1~12 之间。\n");
        return 1;
    }

    /* 天数相同的月份合并到同一段代码，这是 switch 比 if 简洁的地方 */
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
        /* switch 管"哪个月"，闰年判断仍然交给 if，两者配合使用 */
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
        days = 0;   /* 前面的范围校验已拦住非法月份，这里只作兜底 */
        break;
    }

    printf("%d 年 %d 月有 %d 天。\n", year, month, days);

    return 0;
}
