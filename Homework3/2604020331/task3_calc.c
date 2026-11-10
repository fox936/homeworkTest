/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目3 简易计算器
 * 说明：读入「整数 运算符 整数」，用 switch (op) 按运算符分派，
 *       并处理除数为 0 与运算符非法两种情况，出错时不输出结果行。
 * 编译：gcc -Wall -Wextra -std=c11 task3_calc.c -o task3_calc
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("请输入算式（如 12 + 5）：");

    /* %d 与 %c 之间的空格会跳过数字后面的空白，才能正确读到运算符 */
    if (scanf("%d %c %d", &a, &op, &b) != 3)
    {
        printf("输入错误：不支持的运算符。\n");
        return 1;
    }

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("输入错误：除数不能为 0。\n");
        }
        else
        {
            printf("%d / %d = %d\n", a, b, a / b);   /* 整数除法，小数截断 */
        }
        break;
    default:
        printf("输入错误：不支持的运算符。\n");
        break;
    }

    return 0;
}
