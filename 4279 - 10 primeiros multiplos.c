#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    for(int n=1;n<=10;n++){
        b=a*n;
        if(n==10)
        printf("%d",b);
        else
        printf("%d\n",b);}
        return 0;}
