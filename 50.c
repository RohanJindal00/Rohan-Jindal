#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int arr[50], size, i;

    printf("Number of elements you want to store: ");
    scanf("%d", &size);
    printf("\n Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\n Element of this one dimensional array: \n");
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);

    return 0;
}

