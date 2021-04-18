/*4. Dado n inteiro e maior que zero (fornecido pelo usu´ario), fazer um programa para imprimir uma
tabela com os valores de i*j para i= 1, 2, . . . , n e j=1, 2, . . . , n, da seguinte forma (supondo
n=5):
1 2 3 4 5 // dica: imprima essa linha antes das repeti¸c~oes encaixadas
1 1
2 2 4
3 3 6 9
4 4 8 12 16
5 5 10 15 20 25*/
#include <stdio.h>

int main() {
  int i,j, n;
  printf("Por favor, informe n: ");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    printf("%d ", i);
      for(j=1;j<=i;j++){
        printf("%d ", i*j);
      }
    printf("\n");

  }




  return 0;
}
