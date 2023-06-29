#include <stdio.h>
#include <math.h>
int main(){
    double area,r,volume,pi=3.1416;
    printf("Digite o raio da esfera:\n");
    scanf("%lf",&r);
    area=4*pi*pow(r,2);
    volume=4*pi*pow(r,3)/3;
    printf("A area da superficie esferica e igual a %.3lf\n",area);
    printf("O volume da esfera e igual a %.3lf",volume);
	return 0;}
