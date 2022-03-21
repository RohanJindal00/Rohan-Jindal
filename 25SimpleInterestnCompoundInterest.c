#include <stdio.h>
#include <math.h>

int main()
{
    float s, c, p, r, t;
    printf("rohan jindal\n");

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time period: ");
    scanf("%f", &t);

    s = (p * r * t) / 100;
    c = p * (pow((1 + r / 100), t));

    printf("Simple interest is %f\n", s);
    printf("Compound interest is %f", c);

    return 0;
}


