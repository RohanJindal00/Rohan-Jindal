#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int a = 10, b = 20;

    printf("Before Swap:\n");
    printf("a = 10, b = 20\n");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

