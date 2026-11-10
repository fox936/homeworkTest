/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework2 - 题目1 个人信息录入
 * 说明：用 scanf 依次读入年龄(int)、身高(double)、血型(char)，再用 printf 输出一张
 *       闭合边框的信息卡。注意 scanf 读 double 必须用 %lf，读 char 前要加空格跳过回车。
 * 编译：gcc -Wall -Wextra -std=c11 task1_input.c -o task1_input
 */

#include <stdio.h>

#define INNER 30   /* 卡片内容区宽度，按终端显示列数计算 */

/*
 * 计算字符串在终端里的显示宽度。
 * 一个汉字占 3 个字节、却只占 2 个显示列，直接按字节补空格右边框会歪，
 * 所以这里单独按 UTF-8 字节头判断每个字符占几列。
 */
static int disp_width(const char *s)
{
    int width = 0;
    const unsigned char *p = (const unsigned char *)s;

    while (*p != '\0')
    {
        if (*p < 0x80)              /* ASCII：1 字节，1 列 */
        {
            width += 1;
            p += 1;
        }
        else if ((*p >> 5) == 0x06) /* 2 字节字符：1 列 */
        {
            width += 1;
            p += 2;
        }
        else if ((*p >> 4) == 0x0E) /* 3 字节汉字：2 列 */
        {
            width += 2;
            p += 3;
        }
        else                        /* 4 字节字符：2 列 */
        {
            width += 2;
            p += 4;
        }
    }

    return width;
}

/* 打印一条横线 */
static void print_border(void)
{
    int i;

    putchar('+');
    for (i = 0; i < INNER + 2; i++)
    {
        putchar('-');
    }
    printf("+\n");
}

/* 打印一行内容：左边留 1 个空格，右边按显示宽度补空格，保证右竖线对齐 */
static void print_row(const char *text)
{
    int pad = INNER - disp_width(text);
    int i;

    printf("| %s", text);
    for (i = 0; i < pad; i++)
    {
        putchar(' ');
    }
    printf(" |\n");
}

int main(void)
{
    int age;
    double height;
    char blood;
    char line[64];

    printf("请输入年龄：");
    if (scanf("%d", &age) != 1)
    {
        printf("输入错误：年龄必须是一个整数。\n");
        return 1;
    }

    printf("请输入身高(米)：");
    /* 读 double 必须用 %lf，用 %f 属于未定义行为 */
    if (scanf("%lf", &height) != 1)
    {
        printf("输入错误：身高必须是一个数字，例如 1.75。\n");
        return 1;
    }

    printf("请输入血型：");
    /* 格式串里的空格用来跳过上一次输入残留在缓冲区里的回车符 */
    if (scanf(" %c", &blood) != 1)
    {
        printf("输入错误：血型必须是一个字符。\n");
        return 1;
    }

    printf("\n");

    print_border();
    print_row("个 人 信 息 卡");
    print_border();

    snprintf(line, sizeof(line), "年龄：%d 岁", age);
    print_row(line);

    snprintf(line, sizeof(line), "身高：%.2f 米", height);   /* 保留 2 位小数 */
    print_row(line);

    snprintf(line, sizeof(line), "血型：%c 型", blood);
    print_row(line);

    print_border();

    return 0;
}
