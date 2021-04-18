/*Leia um conjunto de valores (at´e que o -1000 seja digitado). Em seguida, mostre quantos destes valores digitados foram
positivos. Na pr´oxima linha, deve-se mostrar a m´edia de todos os valores positivos digitados, com um d´ıgito ap´os o
ponto decimal.*/
#include <stdio.h>

int main() {
  int i=0,count2=0;
  float n, count=0;
  do{
  printf("Por favor, informe um número: ");
  scanf("%f", &n);
  if(n>0){
  count=count+n;
  count2++;}
  }
  while(n!=-1000);
  printf("O maior número digitado foi %d\n", count2);
  printf("A média dos valores positivos é:%.2f\n", count/count2);
  return 0;

}
