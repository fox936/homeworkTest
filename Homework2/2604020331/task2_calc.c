/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目2 四则运算（含除零判断）
 * 说明：读入两个整数，输出和、差、积；再判断除数是否为 0，
 *       不为 0 时输出商和余数，为 0 时给出提示，避免程序崩溃。
 * 编译：gcc -Wall -std=c11 task2_calc.c -o task2_calc
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("请输入两个整数（用空格分隔）：");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("输入错误：请确认输入的是两个整数。\n");
        return 1;
    }

    printf("\n");

    /* 加、减、乘不需要判断，直接算 */
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    /* 除法要单独处理：除数为 0 时不能取商和余数 */
    if (b == 0)
    {
        printf("提示：除数不能为 0，商和余数无法计算。\n");
    }
    else
    {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);   /* %% 输出一个百分号 */
    }

    return 0;
}
