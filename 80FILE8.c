#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult;
    float div;

    printf("rohan jindal\n");
    printf("Input any two numbers separated by comma : ");
    scanf("%d,%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;

    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    printf("The quotient of the given numbers : %f\n", div);

    return 0;
}


