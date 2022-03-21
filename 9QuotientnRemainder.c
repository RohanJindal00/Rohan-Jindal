#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("rohan jindal\n");

    printf("Enter dividend : ");
    scanf("%d", &a);

    printf("Enter divisor : ");
    scanf("%d", &b);

    c = a / b;
    d = a % b;

    printf("Quotient : %d\n", c);
    printf("Remainder : %d", d);

    return 0;
}


