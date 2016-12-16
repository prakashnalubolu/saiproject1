#include<stdio.h>

int main() {
  int i=0,j=0,product=0;
  int palindrome=0;
  int max=0;
  int remainder,o_pro;
  int r_pro=0;

  for(i=100;i<999;i++) {
    for (j=100;j<999;j++) {
      product = i * j;
    
      o_pro=product;

      while(product!=0) {
        remainder=product%10;
        r_pro=r_pro*10;
        product /=10;
      }

      if (o_pro==r_pro) {
        palindrome=product;
      }

      if (palindrome %10 == 9) {
        max=palindrome;
      }
    }
  }
  printf("Largest palindrome number made from the product of two 3-digit numbers is %d",max);
  return 0;
}
