#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int choice=0;
  do{
  int n,c,a=0;
  scanf("%d",&n);
  if(n==-1){
    choice=1;
    break;
  }
  for(int d=0;d<10;d++){
    scanf("%d",&c);
    if(c==n){
      a++;
      continue;}}
    printf("%d appeared %d times\n",n,a);}
while(choice!=1);
return 0;}
