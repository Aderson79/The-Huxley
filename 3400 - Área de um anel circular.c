#include <stdio.h>
#include <math.h>

int main() {
  double r1,r2,rel;
  scanf("%lf%lf",&r1,&r2);
  rel=3.1415*pow(r2,2)-(3.1415*pow(r1,2));
  printf("%.2lf",rel);
  return 0;}
