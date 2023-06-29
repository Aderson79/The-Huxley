#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float a;
    int neg=0;
    for(int d=0;d<5;d++){
        printf("Digite um valor:\n");
        scanf("%f",&a);
        if(a<0){
         neg++;}}
    printf("Foram digitados %d numeros negativos",neg);        
	return 0;
}
