#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int age;
    
    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voating");
    }

    return 0;
}

