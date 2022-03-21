#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int a, b, c, greatest;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c ? b : c));
    
    printf("Greatest number is %d",greatest);

    return 0;
}

