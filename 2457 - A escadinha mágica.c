#include <stdio.h>

int main() {
  int d;
  scanf("%d",&d);
  for(int c=1;c<=d;c++){
      for(int n=1;n<=c;n++){
          if(n==c)
          printf("%d",n);
          else
          printf("%d ",n);}
          printf("\n");}
return 0;}
