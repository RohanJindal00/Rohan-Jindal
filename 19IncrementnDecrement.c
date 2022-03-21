#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int a;

    printf("Enter any Number: ");
    scanf("%d", &a);
    ++a;
    printf("Pre increment is %d\n", a);

    printf("\nEnter any Number: ");
    scanf("%d", &a);
    --a;
    printf("Pre decrement is %d\n", a);

    printf("\nEnter any Number: ");
    scanf("%d", &a);
    a++;
    printf("Post increment is %d\n", a);

    printf("\nEnter any Number: ");
    scanf("%d", &a);
    a--;
    printf("Post decrement is %d\n", a);

    return 0;
}

