#include <stdio.h>
#include <math.h>

int main() {
  long int d,c,r;
  scanf("%ld%ld",&d,&c);
  for(int n=1000;n>=0;n--){
    r=pow(2,n);
    if((d-r)<c)
      continue;
    if((d-r)==c){
      printf("%ld",r);
      break;}   
    printf("%ld ",r);
    d-=pow(2,n);}
	return 0;}
