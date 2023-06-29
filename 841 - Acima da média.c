#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int q=0;
  float a,b,c,media;
  scanf("%f%f%f",&a,&b,&c);
  media=(a+b+c)/3;
  if(a>media)
    q++;
  if(b>media)
    q++;
  if(c>media)
    q++;
  printf("%d",q);
	return 0;
}
