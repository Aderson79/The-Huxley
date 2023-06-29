#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int array[n],pos,valor;
  for(int c=0;c<n;c++){
    scanf("%d",&array[c]);
  }
  for(int d=0;d<n;d++){
    if(d==0){
      pos = d;
      valor = array[d];
    }
    else{
      if(array[d]<valor){
        pos = d;
        valor = array[d];
      }
    }}
  printf("Menor valor: %d\n",valor);
  printf("Posicao: %d",pos);

  return 0;
}
