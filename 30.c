#include <stdio.h>

int main()
{
    int s, d;
    printf("rohan jindal\n");

    printf("Enter a number:");
    scanf("%d", &s);

    d = s % 10;
    if (d == 5)
    {
        s = s / 10;
        printf("\n square = %d%d", s * s++, d * d);
    }
    else
    {
        printf("\n Invalid number");
    }

    return 0;
}


