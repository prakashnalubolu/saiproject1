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


int main() {

  long long numpri=1,num=1;

  while (numpri<10001) {
    num += 2;
    if (isPrime(num)) {
      numpri++;
    }
  }

  printf("10001nth prime number %lld",num);
}
