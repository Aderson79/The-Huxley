#include <stdio.h>
#include <math.h>

int main() {
    int a,d,c;
    scanf("%d%d",&d,&c);
    for(int b=d;b<=c;b++){
        a=pow(b,2)-(4*b)+5;
        printf("%d\n",a);}
        return 0;}
