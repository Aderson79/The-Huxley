#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int array[n];
  for(int c=0;c<n;c++){
    scanf("%d",&array[c]);
  }
  for(int a=n-1;a>=0;a--){
    if (a==0){
      printf("%d",array[a]);
      break;
    }
    printf("%d ",array[a]);
  }
  return 0;
}
