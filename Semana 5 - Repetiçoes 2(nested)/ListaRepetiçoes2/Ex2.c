/*2. Sabe-se que um n´umero da forma n
3 ´e igual `a soma de n ´ımpares consecutivos, fa¸ca um programa
que o usu´ario forne¸ca o valor de m, e o programa determine os ´ımpares consecutivos cuja soma
´e igual a n
3 para para n assumindo valores de 1 a m. No exemplo abaixo m=4.
Exemplo: 1 = 1,
 2= 3 + 5,
 3= 7 + 9 + 11,
 4= 13 + 15 + 17 + 19
*/
#include <stdio.h>

int main() {
  int j,i,soma=2,b=1, m;
  printf("Informe m: ");
  scanf("%d", &m);
    for(i=1;i<=m;i++){
      printf("%d=", i);
      for(j=1;j<=i;j++)
      { if(b%2!=0){
          printf(" %d " , b);
          b++;}
          b++;
            }
            printf("\n");
    }}


