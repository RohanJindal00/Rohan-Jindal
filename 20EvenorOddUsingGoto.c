#include <stdio.h>

int main()
{
    int a;
    printf("rohan jindal\n");

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("%d is an even number", a);
    goto end;
odd:
    printf("%d is an odd number", a);
    goto end;
end:
    return 0;
}


