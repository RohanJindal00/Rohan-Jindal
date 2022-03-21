#include <stdio.h>

void swap (int a, int b) {
 
  int temp;
 
  temp = a;
  a = b;
  b = temp;
 
  printf("Before swapping first number is %d and second number is %d", b , a);
}

int main() {
 
  int first, second;
 printf("rohan jindal\n");
  printf("Enter two numbers : \n");
  scanf("%d %d",&first,&second);
  swap(first,second); 
  printf(" \nAfter swap function called first number is %d and second number is %d", first ,second);
 
  return 0;
}