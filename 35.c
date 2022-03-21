#include<stdio.h>

int main(){
    int n;
    printf("rohan jindal\n");
    printf("Enter the no.");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}