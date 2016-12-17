#include<stdio.h>
int main() {
  long long int i;
  int j=0;

  while (i!= 0) {
    
    for (j=1;j<=20;j++) {
      
      i%j==0;
    }
  }

  printf("smallest number that is divisible by all of the numbers from 1-20 is %d",i);

  return 0;
}
