#include <stdio.h>
void main()
{
    int i, j, a, n, number[30];
    printf("rohan jindal\n");
    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("Enter the numbers : \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("Ascending order of numbers are given below : \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}



