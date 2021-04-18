/*. Ler um valor n. Calcular e escrever seu respectivo fatorial. Fatorial de n = n ∗ (n − 1) ∗ (n − 2) ∗ (n − 3) ∗ ... ∗ 1. At´e
qual valor de n seu programa apresenta resultados consistentes?*/
#include <stdio.h>
/*NÃO ESTOU ORGULHOSO DISSO*/
int main(){
  int n,i=1;
  double soma, fatorial=1;
  printf("Informe n: ");
  scanf("%d", &n);
    while(n>1){
        soma=n*(n-i);
        fatorial=fatorial*soma;
        n=n-2;
    }
  printf("%lf", fatorial);
}





