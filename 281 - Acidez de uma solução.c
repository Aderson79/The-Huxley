#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int q=0;
  float a,b,c,media;
  printf("Digite o pH da solucao:\n");
  scanf("%f",&a);
  if(a<0||a>14)
    printf("Valor do pH deve estar entre 0 e 14");
  else{
    if(a<7&&a>=0)
    printf("Solucao acida");
    else{
      if(a>7&&a<=14)
        printf("Solucao basica");
      else{
        printf("Solucao neutra");}}}
	return 0;
}
