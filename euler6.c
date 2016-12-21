#include<stdio.h>

int main() {

long sq=0,sumofsq=0;
long j=0,sqofsum=0;
long long diff=0;

for(long i=1;i<=100;i++) {
  sq=i*i;
  sumofsq +=sq;

  j +=i ;
  sqofsum=j*j;

}

diff = sqofsum - sumofsq;

printf("difference between sum of square and square of sum of first 10 natural numbers is %lld",diff);

return 0;
}
