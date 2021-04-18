#include <stdio.h>
int main(void) {
  int consumo, preçoIntervalo[]={7,20,140};
  int arraytabela[]={10,30,100};
  printf("Por favor, informe o seu consumo mensal: ");
  scanf("%d", &consumo);
    if(consumo<10)
      printf("R$:%d", preçoIntervalo[0]);
    else{
        if(consumo>100)
          printf("R$:%d", preçoIntervalo[0]+preçoIntervalo[1]+preçoIntervalo[2]+(consumo-arraytabela[2])*5);
        else
          if (consumo>=arraytabela[0]&&consumo<=arraytabela[1])
            printf("R$: %d", preçoIntervalo[0]+consumo-arraytabela[0]);
          else
            printf("R$%d", preçoIntervalo[0]+preçoIntervalo[1]+(consumo-arraytabela[1])*2);
            }
    }





