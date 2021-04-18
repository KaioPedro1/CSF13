/*9. Escreva um programa que leia n´umeros digitados pelo usu´ario at´e que este digite um valor negativo. Neste momento,
o algoritmo dever´a apresentar o maior valor digitado*/
#include <stdio.h>

int main() {
  int n, maior, i;

  do{
  printf("Por favor, informe um número: ");
  scanf("%d", &n);
  if (i<n)
  i=n;
  }
  while(n>=0);
  printf("O maior número digitado foi %d", i);
  return 0;

}
