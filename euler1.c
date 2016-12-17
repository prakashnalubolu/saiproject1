#include <stdio.h>

int main() {
  int i,j,k;
  int sum_of_multiples_of_three=0;
  int sum_of_multiples_of_five=0;
  int total_sum=0;

  for(i=0;i<1000;i++) {
    if (i%3==0) {
      c1 += i;
    }
  }
  
  for(j=0;j<1000;j++) {
    if (j%5==0) {
      c2 += j;
    }
  }
  
  sum = c1 + c2;

  for(k=0;k<1000;k++)      {
    if(k%15==0) {
      sum -= k;
    }
  }
  printf("sum of all multiples of 3 or 5 below 1000=%d\n",sum);
  return 0;
}
