#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
  int n1,n2[20],choice=0;
  scanf("%d",&n1);
  for(int n=0;n<20;n++){
    scanf("%d",&n2[n]);
    if(n2[n]==-1)
      break;}
  for(int d=0;d<20;d++){
    if(n2[d]==-1)
      break;
    if(n1==n2[d]){
      choice++;}}
  printf("%d aparece %d vezes",n1,choice);
  return 0;}
