/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目3 简易四则运算器
 * 说明：读入「整数 运算符 整数」的形式（如 12 + 5），
 *       用 switch 完成加、减、乘、除四种运算，
 *       并处理除数为 0 和运算符不合法这两种异常情况。
 * 编译：gcc -Wall -std=c11 task3_calc.c -o task3_calc
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("请输入算式（格式如 12 + 5）：");

    /* %d 之间夹一个 %c，能自动跳过空格读到运算符 */
    if (scanf("%d %c %d", &a, &op, &b) != 3)
    {
        printf("输入错误：请按「整数 运算符 整数」的格式输入。\n");
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
    case 'x':           /* 小写 x 也当作乘号，方便键盘输入 */
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("输入错误：除数不能为 0。\n");
        }
        else
        {
            printf("%d / %d = %d 余 %d\n", a, b, a / b, a % b);
        }
        break;
    default:
        printf("输入错误：不支持的运算符 '%c'，只支持 + - * /。\n", op);
        break;
    }

    return 0;
}
