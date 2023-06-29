#include <stdio.h>

int main() {
  float a;
  scanf("%f",&a);
  if(a<7)
  printf("Acida");
  else{
      if(a>7)
        printf("Basica");
      else{
        printf("Neutra");}}
	return 0;
}
