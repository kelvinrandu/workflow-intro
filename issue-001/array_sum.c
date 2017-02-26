#include<stdio.h>
int main (void){
  int i,sum;
  int sum=0;
  int b[10]={1,2,3,4,5,6,7,4,3};

  for( i= 0; i<10; i++){
    sum += b[i];

  }
  printf("%d",sum);
  return 0;
}
