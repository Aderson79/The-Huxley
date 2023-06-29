#include <stdio.h>
#include <math.h>
int main() {
    float area,r,pi=3.1415;
    scanf("%f",&r);
    area=pi*pow(r,2);
    printf("%.6f",area);
	return 0;
}
