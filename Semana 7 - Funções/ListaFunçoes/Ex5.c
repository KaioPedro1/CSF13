/*Escreva uma fun�c�ao que recebe dois inteiros n1 e n2 e retorna o maior de dois n�umeros. Desafio: na fun�c�ao principal,
determine o maior de tr�es n�umeros usando apenas duas chamadas `a fun�c�ao definida.
int retornaMaior(int n1, int n2)*/
#include <stdio.h>
int retornaMaior(int n1, int n2);
int main() {
  int num1,num2;
  printf("Digite dois n�mero(separados por espa�o): ");
  scanf("%d" "%d",&num1,&num2);
  printf("O maior �: %d", retornaMaior(num1,num2));
  return 0;
}

int retornaMaior(int n1, int n2){
  if(n1>=n2)
  return n1;
  else
  return n2;
}
