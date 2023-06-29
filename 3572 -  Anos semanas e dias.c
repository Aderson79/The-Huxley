#include <stdio.h>
#include <math.h>

int main(){
    int a,b,an=0,s=0,d=0;
    scanf("%d",&a);
    if((a/365)>=1){
    an=floor(a/365);
    b=a%365;
    if((b/7)>=1){
        s=floor(b/7);
        d=b%7;}
        else
        d=b;}
        else{
            if((a/7)>=1){
                s=floor(a/7);
                d=a%7;}
                else{
                    d=a;}}
                    printf("%d ano(s), %d semana(s) e %d dia(s)",an,s,d);
                    return 0;}
