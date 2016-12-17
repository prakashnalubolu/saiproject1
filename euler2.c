#include<stdio.h>

int main() {
int first=1,second=2;
int count=0;
int next=0;

for (next=first+second; next <= 4000000; next=first+second) {
    first=second;
    second=next;
    
    if (next%2==0){
    count += next;
   }
}

printf ("sum of even numbers in Fibonacci series under value of 4M is %d \n",count+2);
 
return 0;
}
