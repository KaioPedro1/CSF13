/*A seguinte sequˆencia de n´umeros 0 1 1 2 3 5 8 13 21... ´e conhecida como s´erie de Fibonacci. Nessa sequˆencia,
cada n´umero, depois dos 2 primeiros, ´e igual `a soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro n e
mostre os n primeiros n´umeros dessa s´erie.*/
#include <stdio.h>

int main() {
  int n, fibo=1, fibo2=0,i,calc;
  printf("Por favor, informe n: ");
  scanf("%d", &n);
  if(n<=1)
    printf("%d", fibo2);
  else{
    printf("%d\n", fibo2);
  for(i=2; i<=n; i++){
  calc=fibo+fibo2;
  fibo=fibo2;
  fibo2=calc;
  printf("%d\n", calc);
  }
  }
  return 0;
}
