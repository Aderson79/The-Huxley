#include <stdio.h>

int main() {
  int choice=0,a,z=0,qnt=0;
  float dinha; 
  do{
  scanf("%d",&a);
  if(a==999){
    break;
    choice=1;}
  else{
    if(a>2){
      qnt++;
      z=z+(a-2);
    }}}
    while(choice!=1);
  dinha=z*(12.89);
  printf("%.2f\n",dinha);
  printf("%d",qnt);
	return 0;}
Abaixo a poluição
