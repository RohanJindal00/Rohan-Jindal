#include <stdio.h>

int main()
{
    int i, n, r = 0;
    printf("rohan jindal\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            r = 1;
        break;
    }

    if (r == 0)
    {
        printf("\n %d is a Prime number", n);
    }
    else
    {
        printf("\n %d is a Composite number", n);
    }

    return 0;
}


