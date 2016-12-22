#include<stdio.h>
#include<stdbool.h>

bool isPrime (long long n) {
  for (long long ii=2; ii<n; ii++) {
    if ((n%ii) == 0) {
      return false;
    }
  }
  return true;
}

int main () {
  long long num=600851475143;
  long long prime_factor=0,factor;
  long long max_pri_fac=0;

  for (factor=2;factor<num;factor++) {
    if ((num % factor) == 0){
      if (isPrime(factor)) {
       prime_factor=factor;
      
       if (prime_factor>max_pri_fac) {
         max_pri_fac=prime_factor;
       }
     }
    }
  }
    
  printf("largest prime factor is %lld",max_pri_fac);


  return 0;
}
