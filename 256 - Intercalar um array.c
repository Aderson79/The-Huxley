#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int array1[n], array2[n];
  for(int n1=0;n1<n;n1++){
    scanf("%d",&array1[n1]);
  }
  for(int n2=0;n2<n;n2++){
    scanf("%d",&array2[n2]);
  }
  for(int aux=0;aux<(2*n);aux++){
    if (aux==0){
      printf("%d\n",array1[0]); 
      continue;}
    if (aux==1){
      printf("%d\n",array2[0]);
      continue;}
    if (aux%2==0){
      printf("%d\n",array1[aux/2]);
      continue;}
    if (aux%2==1){
      printf("%d\n",array2[(aux-1)/2]);
      continue;}
  }
  return 0;
}
