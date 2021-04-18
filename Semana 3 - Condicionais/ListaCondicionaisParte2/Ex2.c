/*Fa¸ca um programa que leia do teclado um ano e imprima na tela se ele ´e ou n˜ao bissexto. Obs.: um ano ser´a bissexto
se: (a) for divis´ıvel por 400 OU (b) se for divis´ıvel por 4 e n˜ao o for por 100. Vocˆe deve fazer este exerc´ıcio usando
apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores l´ogicos!
*/
#include <stdio.h>

int main() {
  int ano;
  printf("Digite um ano: ");
  scanf("%d", &ano);
  if(ano%400==0||(ano%4==0&&ano%100>0))
    printf("O ano informado É bissexto.");
  else
  printf("O ano informado não é bissexto.");
  return 0;
}
