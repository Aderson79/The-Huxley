#include <stdio.h>
#include <math.h>

int main() {
  int d,choice=0;
  float c;
  do{
    scanf("%d",&d);
    if(d==0){
      break;
      choice=1;}
    else{
        c=d/2;
        printf("%.0f - %.0f\n",pow((c+1),2),pow(c,2));}}
        while(choice!=1);
	return 0;}
