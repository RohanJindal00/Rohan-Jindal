#include<stdio.h>
int swap(int *,int *);        
 
void main( )
{
    int n1,n2;
    printf("rohan jindal\n");
    printf("Enter the two numbers to be swapped\n");
    scanf("%d%d",&n1,&n2);
    
    printf("\nThe values of n1 and n2 in the main function 
    before calling the swap function are n1=%d n2=%d",n1,n2);
    swap(&n1,&n2);                                          
    printf("\nThe values of n1 and n2 in the main function 
    after calling the swap function are n1=%d n2=%d",n1,n2);
} 
int swap(int *n1,int *n2)                           
{ 
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d",*n1,*n2);
}