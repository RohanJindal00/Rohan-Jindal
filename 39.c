#include <stdio.h>
void prime(int n) {
  int i, flag = 0;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (n == 0 || n == 1) {
       printf("%d is neither prime nor composite. \n", n);
   } 
  else {
    if (flag == 0)
      printf("%d is a prime number. \n", n);
    else
      printf("%d is not a prime number. \n", n);
  }
}

int main(){
  printf("rohan jindal\n");
    prime(1);
    prime(7);
    prime(10);
    
    return 0;
    }