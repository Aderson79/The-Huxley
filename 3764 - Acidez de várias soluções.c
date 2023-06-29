#include <stdio.h>

int main() {
  float choice=0,a;
  do{
  scanf("%f",&a);
  if(a==-1){
    break;
    choice=1;}
  else{
    if(a>7)
      printf("BASICA\n");  
    if(a==7)
      printf("NEUTRA\n");
    if(a<7)
      printf("ACIDA\n");}}
    while(choice!=1);
  return 0;}
