#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  char sel1 [20], sel2 [20],choice[20];
  int quant1,quant2,saldo1,saldo2,gol1,gol2;
  scanf(" %[^\n]s",sel1);
  for(int n=0;n<strlen(sel1);n++){
    sel1[n]=tolower(sel1[n]);
  }
  scanf("%d%d%d",&quant1,&saldo1,&gol1);
  scanf(" %[^\n]s",sel2);
  for(int n1=0;n1<strlen(sel2);n1++){
    sel2[n1]=tolower(sel2[n1]);
  }
  scanf("%d%d%d",&quant2,&saldo2,&gol2);
  if(quant1>quant2)
    strcpy(choice,sel1);
  else{
    if(quant2>quant1)
      strcpy(choice,sel2);
    else{
      if(saldo1>saldo2)
        strcpy(choice, sel1);
      else{
        if(saldo2>saldo1)
          strcpy(choice,sel2);
        else{
          if(gol1>gol2)
            strcpy(choice, sel1);
          else{
            if(gol2>gol1)
              strcpy(choice, sel2);
            else
              strcpy(choice, "EMPATE");
          }
        }
          }
    }
  }
  printf("%s",choice);
  return 0;
}
