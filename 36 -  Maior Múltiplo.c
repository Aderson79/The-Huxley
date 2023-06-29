#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int m, n, maior;
  float div;
  scanf("%d",&m);
  scanf("%d",&n);
  div = n/m;
  maior=floorf(div)*m;
  if (div==0)
    printf("sem multiplos menores que %d",n);
  else
    printf("%d",maior);
  return 0;
}
