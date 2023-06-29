#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    char choice[4];
    scanf("%d",&n);
    if(n%4==0&&n%7==0&&n%5!=0){
        strcpy(choice,"sim");}
    else
    strcpy(choice,"nao");
    printf("%s",choice);
	
	return 0;}
