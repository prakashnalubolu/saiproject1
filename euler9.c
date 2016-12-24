#include<stdio.h>

int main() {
  
  long pro=0;
  int a,b,c;

  for(int a=1;a<1000;a++) {
    for (int b=2;b<1000;b++) {
      for(int c=3;c<1000;c++) {
        if ((c*c==a*a+b*b) && (a+b+c==1000)) {
          pro=a*(b*c);
        }
      }
    }
  }
  printf("value of ABC is %ld",pro);

  return 0;
}
