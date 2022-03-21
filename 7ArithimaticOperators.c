#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int a, b, add, sub, mul;
    float div, percent, average;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    percent = (add * 100) / 200;
    average = add / 2;

    printf("Addition : %d\n", add);
    printf("Subtraction : %d\n", sub);
    printf("Multiplication : %d\n", mul);
    printf("Division : %f\n", div);
    printf("Percentage : %f\n", percent);
    printf("Average : %f\n", average);

    return 0;
}


