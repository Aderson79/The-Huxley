#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int AnalisarSituacao(float n1, float n2, float n3, float n4){
  int media;
  media = (n1 + n2*2 + n3*3 + n4*4)/10;
  if (media>=9)
    return printf("aprovado com louvor");
  if (media>=7)
    return printf("aprovado");
  if (media<3)
    return printf("reprovado");
  if (media<7&&media>=3)
    return printf("prova final");
}

int main(void) {
  float nota1,nota2,nota3,nota4;
  scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);
  AnalisarSituacao(nota1,nota2,nota3,nota4);
  return 0;
}
