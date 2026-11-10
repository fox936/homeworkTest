/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目3 奇偶与大小判断
 * 说明：两个小问写在同一个 main 里。
 *       (1) 读入一个整数，判断是奇数还是偶数；
 *       (2) 再读入两个整数，输出较大的那个，相等时给出提示。
 * 编译：gcc -Wall -Wextra -std=c11 task3_judge.c -o task3_judge
 */

#include <stdio.h>

int main(void)
{
    int n, x, y;

    /* ---- 第一问：奇偶判断 ---- */
    printf("请输入一个整数：");
    if (scanf("%d", &n) != 1)
    {
        printf("输入错误：请输入一个整数。\n");
        return 1;
    }

    if (n % 2 == 0)
    {
        printf("%d 是偶数。\n", n);
    }
    else
    {
        printf("%d 是奇数。\n", n);
    }

    /* ---- 第二问：比较大小，三种情况都要覆盖 ---- */
    printf("请输入两个整数：");
    if (scanf("%d %d", &x, &y) != 2)
    {
        printf("输入错误：请确认输入的是两个整数。\n");
        return 1;
    }

    if (x > y)
    {
        printf("较大的数是：%d\n", x);
    }
    else if (y > x)
    {
        printf("较大的数是：%d\n", y);
    }
    else
    {
        printf("两个数相等。\n");
    }

    return 0;
}
