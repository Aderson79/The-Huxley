#include <stdio.h>
#include <math.h>

int main(){
    double area,r,volume,pi=3.1416;
    scanf("%lf",&r);
    area=4*pi*pow(r,2);
    volume=4*pi*pow(r,3)/3;
    printf("%.2lf\n",area);
    printf("%.2lf",volume);
	return 0;
}
