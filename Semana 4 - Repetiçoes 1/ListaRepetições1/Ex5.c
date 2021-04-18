/*Construa um programa que leia um n´umero inteiro positivo n, verifica e informa se o mesmo ´e perfeito ou n˜ao. Dizemos
que n ´e perfeito se a soma de todos os divisores positivos pr´oprios - excluindo ele mesmo - ´e igual a n. Exemplo: 28 ´e
perfeito, pois 1 + 2 + 4 + 7 + 14 = 28.*/
#include <stdio.h>

int main() {
  int n,i,k=0;
  printf("Por favor, informe o número inteiro e positivo: ");
  scanf("%d", &n);
  for(i=1; i<n; i++){
    if(n%i==0)
    k=k+i;
  }
  if(k==n)
  printf("Número %d é perfeito.", k);
  else
  printf("Número %d NÃO é perfeito.", k);
  return 0;
}
