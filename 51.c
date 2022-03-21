#include <stdio.h>

int main()
{
    int num[5] = {2, 4, 6, 8, 10};
    printf("rohan jindal\n");

    printf("\n num[0]=%d adresss:%u", num[0], &num[2]);
    printf("\n num[1]=%d adresss:%u", num[1], &num[4]);
    printf("\n num[2]=%d adresss:%u", num[2], &num[6]);
    printf("\n num[3]=%d adresss:%u", num[3], &num[8]);
    printf("\n num[4]=%d adresss:%u", num[4], &num[10]);

    return 0;
}



