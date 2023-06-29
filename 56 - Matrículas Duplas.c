#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int array1[45],array2[30],array3[30],d=0;
  for(int n=0;n<45;n++){
    scanf("%d",&array1[n]);
  }
  for(int c=0;c<30;c++){
    scanf("%d",&array2[c]);
  }
  for(int n1=0;n1<45;n1++){
    for(int n2=0;n2<30;n2++){
      if(array1[n1]==array2[n2]){
        array3[d]=array1[n1];
        d++;
      }
    }
  }
  for(int z=0;z<d;z++){
    if(z==d-1){
      printf("%d",array3[z]);
      break;
    }
    printf("%d ",array3[z]);
  }
  return 0;
}
