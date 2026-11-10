/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework3 - 题目1 菜单选择
 * 说明：输出学生成绩管理系统菜单，用 switch 处理 1~4 的选择，
 *       输入 1~4 以外的数字时给出提示，而不是直接结束。
 * 编译：gcc -Wall -std=c11 task1_menu.c -o task1_menu
 */

#include <stdio.h>

int main(void)
{
    int choice;

    printf("===== 学生成绩管理系统 =====\n");
    printf("  1. 录入成绩\n");
    printf("  2. 查询成绩\n");
    printf("  3. 修改成绩\n");
    printf("  4. 退出系统\n");
    printf("============================\n");
    printf("请输入你的选择（1~4）：");

    if (scanf("%d", &choice) != 1)
    {
        printf("输入错误：请输入 1~4 之间的数字。\n");
        return 1;
    }

    /* switch 每个分支都要有 break，default 用来兜住非法选择 */
    switch (choice)
    {
    case 1:
        printf("你选择了：录入成绩\n");
        break;
    case 2:
        printf("你选择了：查询成绩\n");
        break;
    case 3:
        printf("你选择了：修改成绩\n");
        break;
    case 4:
        printf("你选择了：退出系统\n");
        break;
    default:
        printf("输入错误：请输入 1~4 之间的数字。\n");
        break;
    }

    return 0;
}
