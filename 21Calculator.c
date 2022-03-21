#include <stdio.h>

int main()
{
    int a, b, c, ch;
    printf("rohan jindal\n");

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("\n ARITHMATIC FUNCTIONS");
    printf("\n 1 Addition");
    printf("\n 2 Subtraction");
    printf("\n 3 Multiplication");
    printf("\n 4 Division");
    printf("\n 5 Modulus");

    printf("\n Enter your choice: ");
    scanf("\n %d", &ch);

    switch (ch)
    {
    case 1:
        c = a + b;
        printf("%d", c);
        break;

    case 2:
        c = a - b;
        printf("%d", c);
        break;

    case 3:
        c = a * b;
        printf("%d", c);
        break;

    case 4:
        c = a / b;
        printf("%d", c);
        break;

    case 5:
        c = a % b;
        printf("%d", c);
        break;

    default:
        printf("wrong input");
    }
    return 0;
}

