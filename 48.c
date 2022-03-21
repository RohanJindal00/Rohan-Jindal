#include <stdio.h>
#include <stdlib.h>

int a, sum;
void main(int);
void main(int a)
{
   printf("rohan jindal\n");
   

    sum = sum + a;
    printf("\n x=%d sum:%5d", a, sum);
    if (a == 5)
        exit(0);
    main(++a);
}


