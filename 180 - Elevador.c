#include <stdio.h>

int main(void) {
    int n,c,s,e,aux=0;
    char choice;
    scanf("%d%d",&n,&c);
    for(int p=0;p<n;p++){
    scanf("%d%d",&s,&e);
    if((e-s+aux)>c){
        choice='S';
        break;}
        else{
            choice='N';
            aux=aux+(e-s);}}
            printf("%c",choice);
            return 0;}
