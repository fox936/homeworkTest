/*
 * 学号：2604020331
 * 姓名：李佳琦
 * 题目：Homework1 - 题目2 基本数据类型演示
 * 编译：gcc -Wall -std=c11 task2_types.c -o task2_types
 */

#include <stdio.h>

int main()
{
    int age = 19;
    float height = 1.75f;
    double pi = 3.14159265358979;
    char bloodType = 'A';

    printf("int    age    = %d\n", age);
    printf("float  height = %f\n", height);
    printf("double pi     = %lf\n", pi);
    printf("char   blood  = %c\n", bloodType);

    return 0;
}
