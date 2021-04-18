/*Leia um valor inteiro n e mostre na tela a sua tabuada (n x 1 at´e n x 10).*/
#include <stdio.h>

int main() {
  int n, i;
  printf("Por favor, informe n: ");
  scanf("%d", &n);
  for(i=1; i<=10; i++){
    printf("%d x %d é %d\n", n, i, n*i);
  }




  return 0;
}
