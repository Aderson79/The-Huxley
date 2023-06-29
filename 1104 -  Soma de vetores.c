#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int array1[10],array2[10],array3[10];
  for(int n=0;n<10;n++){
    scanf("%d",&array1[n]);}
  for(int d=0;d<10;d++){
    scanf("%d",&array2[d]);}
  for(int s=0;s<10;s++){
    array3[s]=array1[s]+array2[s];}
  for(int c=0;c<10;c++){
    if(c==10){
      printf("%d",array3[c]);
    break;}
    printf("%d ",array3[c]);}
  return 0;
}
