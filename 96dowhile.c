#include<stdio.h>  
int main(){    
int i=1,number=0;
printf("rohan jindal\n");   
printf("Enter a number: ");    
scanf("%d",&number);    
do
{    
printf("%d %d \n",(i),(i*i));    
i++;    
}
while(i<=number);    
return 0;  
}