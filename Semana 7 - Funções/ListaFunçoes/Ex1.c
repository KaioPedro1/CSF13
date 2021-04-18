/*Escreva uma fun�c�ao que recebe como par�ametro um inteiro positivo e retorna 1 se ele representar um ano bissexto ou
0 caso contr�ario. Um ano �e bissexto se ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0). Prot�otipo:
int ehBissexto(int ano);*/
#include <stdio.h>
int ehBissexto(int ano){
  if(ano%4==0&&(ano%100!=0||ano%400==0))
    return 1;
  else
    return 0;
}
int main() {
  int ano, flag;
  printf("Informe o ano de nascimento: ");
  scanf("%d", &ano);
  flag=ehBissexto(ano);
  if(flag)
    printf("Eh bissexto\n");
      else
        printf("Nao Eh bissexto\n");
  return 0;
}
