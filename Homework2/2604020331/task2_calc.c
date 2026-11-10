/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目2 四则运算（含除零判断）
 * 说明：读入两个整数，输出和、差、积；再判断除数是否为 0，
 *       不为 0 时继续输出商和余数，为 0 时给出提示并跳过商和余数。
 * 编译：gcc -Wall -Wextra -std=c11 task2_calc.c -o task2_calc
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("请输入两个整数：");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("输入错误：请确认输入的是两个整数。\n");
        return 1;
    }

    /* 加、减、乘与除数无关，先直接输出 */
    printf("和   = %d\n", a + b);
    printf("差   = %d\n", a - b);
    printf("积   = %d\n", a * b);

    /* 除法必须先判 0，否则程序会因除零而崩溃 */
    if (b == 0)
    {
        printf("除数不能为 0，无法计算商和余数。\n");
    }
    else
    {
        printf("商   = %d\n", a / b);   /* 整数除法，小数部分直接截断 */
        printf("余数 = %d\n", a % b);
    }

    return 0;
}
