/*1. Fa¸ca um programa que dados n e m inteiros e maiores que zero (fornecidos pelo usu´ario), imprima
uma tabela com os valores de i*j para i= 1, 2,..., n e j=1, 2,..., m, da seguinte forma
(supondo n=3 e m=5):
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
*/
#include <stdio.h>

int main() {
  int i,j,n,m;
  printf("Por favor, informe n e m(separados por espaço): ");
  scanf("%d" "%d", &n,&m);

  for(i=1; i<=n; i++){
    for(j=1;j<=m;j++){
        printf("\t%d", i*j);
    }
      printf("\n");
  }
  return 0;
}
