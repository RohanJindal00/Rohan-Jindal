#include <stdio.h>

int main()
{
    int s = 108;
    int *ptr = &s;

   printf("rohan jindal\n");

    printf("Value of s is %d\n", s);
    printf("Value of s is %x\n", ptr);
    printf("Value of s is %p\n", ptr);
    printf("Value of s is %d\n", *ptr);
    printf("Value of s is %p\n", *ptr);
    printf("Value of s is %p\n", &s);
    printf("Value of s is %x\n", &ptr);

    return 0;
}

