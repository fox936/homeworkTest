/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目5 字符分类
 * 说明：读入一个字符，先用 switch 把 10 个元音字母（大小写）合并判断；
 *       其余字符在 default 里再用 if 区分辅音字母、数字字符和其他字符。
 * 编译：gcc -Wall -Wextra -std=c11 task5_char.c -o task5_char
 */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("请输入一个字符：");

    /* %c 前加空格，跳过缓冲区里残留的回车或空格 */
    if (scanf(" %c", &ch) != 1)
    {
        printf("输入错误：没有读到字符。\n");
        return 1;
    }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("'%c' 是元音字母。\n", ch);
        break;
    default:
        /* 不是元音，再细分：字母 / 数字 / 其他符号 */
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("'%c' 是辅音字母。\n", ch);
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("'%c' 是数字字符。\n", ch);
        }
        else
        {
            printf("'%c' 是其他字符。\n", ch);
        }
        break;
    }

    return 0;
}
