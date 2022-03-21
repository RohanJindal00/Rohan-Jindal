#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int a = 5, b = 10, c;

    printf("Before Swap:\n");
    printf("a = 5, b = 10\n");

    c = a;
    a = b;
    b = c;

    printf("After Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}


