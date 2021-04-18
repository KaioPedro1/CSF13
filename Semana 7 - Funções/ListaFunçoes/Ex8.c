/*8. Fa¸ca uma fun¸c˜ao tipo void que, dado um inteiro positivo n como entrada, mostra todos os valores a, b e c tal que
a+b+c = n. Prot´otipo:
void determinaValores(int n);
Exemplo
n: 4
1 + 1 + 2
1 + 2 + 1
2 + 1 + 1 */
#include <stdio.h>
void determinaValores (int n);
int main() {
  int num;
  printf("Informe um número: ");
  scanf("%d",&num);
  determinaValores(num);
  return 0;
}
void determinaValores (int n){
  int i,j,k;
  for(i=1;i<=n-2;i++){
    for(j=1;j<=n-2;j++){
      for(k=1;k<=n-2;k++){
        if(i+j+k==n)
          printf("%d + %d + %d = %d \n", i,j,k,i+j+k);
      }
    }
  }
}
