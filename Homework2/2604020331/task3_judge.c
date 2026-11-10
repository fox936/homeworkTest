/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目3 奇偶与大小判断
 * 说明：第一部分读入一个整数，判断它是奇数还是偶数；
 *       第二部分再读入两个整数，比较大小并输出较大者（相等时给出提示）。
 * 编译：gcc -Wall -std=c11 task3_judge.c -o task3_judge
 */

#include <stdio.h>

int main(void)
{
    int n, x, y;

    /* 第一部分：奇偶判断，用对 2 取余的结果来判断 */
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

    /* 第二部分：比较两个数的大小，三种情况都要覆盖 */
    printf("\n请输入两个整数（用空格分隔）：");
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
        printf("两个数相等，都是 %d。\n", x);
    }

    return 0;
}
