/*5. Construa um programa que leia um n´umero n e, em seguida, leia uma sequˆencia de n n´umeros
inteiros e verifique se ela est´a ordenada de forma crescente.
Exemplo de Entrada Exemplo de Sa´ıda
5 sim
1 2 5 6 7
4 n~ao
1 20 5 7
*/
#include <stdio.h>

int main() {
  int n,i, aux=1, flag=0, num=1;
  printf("Informe a quantidade de verificações: ");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    scanf("%d", &num);
  if(aux<=num){
    aux=num;
  }
  else
  flag=1;
  }
  if(flag)
  printf("Não");
  else
  printf("Sim");
  return 0;
}

/*do{

    if(num<=cond){
    cond=i;
    printf(" %d ", cond);
    }
    else
    flag=1;
    num++;
  }while(num<=n);*/
