#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  char frase [100000];
  int aux2=0;
  scanf(" %[^\n]s",frase);
  for(int d=0;d<strlen(frase);d++){
    if (frase[d]=='a')
      aux2++;
    if (frase[d]=='A')
      aux2++;
  }
  printf("%d",aux2);
  return 0;
}
