#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n1,n2,n3,media;
    scanf("%f%f%f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    if(media<3)
    printf("reprovado");
    if(media>=3&&media<7)
    printf("prova final");
    if(media>=7)
    printf("aprovado");
	return 0;
}
