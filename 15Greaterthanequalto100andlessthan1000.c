#include <stdio.h>

int main()
{
   printf("rohan jindal\n");
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num > 100)
    {
        printf("Number is greater than 100");
    }
    else if (num == 100)
    {
        printf("Number is equal to 100");
    }
    else if (num < 1000)
    {
        printf("Number is less than 1000");
    }

    return 0;
}

