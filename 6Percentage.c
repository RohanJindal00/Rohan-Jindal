#include <stdio.h>

int main()
{
    printf("rohan jindal\n");
    int DM, CL, FCIT, TC, WT, sum, percent;

    printf("Enter the marks obtained in DM : ");
    scanf("%d", &DM);

    printf("Enter the marks obtained in CL : ");
    scanf("%d", &CL);

    printf("Enter the marks obtained in FCIT : ");
    scanf("%d", &FCIT);

    printf("Enter the marks obtained in TC : ");
    scanf("%d", &TC);

    printf("Enter the marks obtained in WT : ");
    scanf("%d", &WT);

    sum = DM + CL + FCIT + TC + WT;
    percent = sum * 100 / 50;
    printf("Percentage : %d", percent);

    return 0;
}

