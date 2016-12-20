#include<stdio.h>
#include<stdbool.h>

bool ispalindrome(long n) {
  int remainder=0,o=0,r=0;

  o=n;
  while (n!=0) {
    remainder=n%10;
    r=r*10+remainder;
    n /=10;
  }
    if(o==r) {
      return true;
    }
    return false;
}

int main() {
  long product=0;
  long palindrome=0,max_pal=0;

  for(long i=100;i<=999;i++) {
    for (long j=100;j<=999;j++) {
      product = i * j;
      if (ispalindrome(product)) {
        palindrome=product;
        if(palindrome>max_pal) {
         max_pal=palindrome;
       }
      }
    }
  }
  
  printf("Largest palindrome number made from the product of two 3-digit numbers is %ld",max_pal);
  return 0;
}
