#include<stdio.h>

int main() {
long long int n=600851475143;
long int largest_prime_factor=0;
long int i=0,factor=0,j=0;

for (i=2;i<n;i++) {
       n%i==0; 
       factor=i;
    for (j=2;j<i;j++) {
      if (factor%j==0) {
        break;
       }
      else{
        largest_prime_factor=i;
      }
    }
}

printf("largest prime factor for 600851475143 is %d",largest_prime_factor);

return 0;
}
