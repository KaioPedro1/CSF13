/*Leia um valor inteiro n. Apresente todos os n´umeros de 1 a 100 que divididos por n d˜ao resto igual a 2.*/

#include <stdio.h>

int main() {
  int n, i;
  printf("Por favor, informe n: ");
  scanf("%d", &n);
for (i=0; i<100; i++){
  if(i%n==2)
  printf("%d\n",i);
}
  return 0;

}
