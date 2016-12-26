#include<stdio.h>

int num_of_divisors(int num) {
 int limit=num;
 int nod=0;
  
 if (num==1) {
   return 1;
 }
 for (int i=1;i<limit;++i) {
   if (num%i==0) {
     limit =num/i;
     if (limit != i) {
       nod++;
     }
     nod++;
   }
 }
 return nod;
}

int main() {
  long long number=0;
  long long i=1;
   
  while(num_of_divisors(number)<500) {
    number +=i;
    i++;
  }
  
  printf ("value of first triangular number having 500 divisors is %lld",number);

return 0;
}
