/*9. Dados t n´umeros inteiros positivos (t fornecido pelo usu´ario), calcular a soma dos que s˜ao
primos.
*/
#include <stdio.h>

int main() {
  int t,n2,i=2,count=0,j,flag=1;
  printf("Por favor, informe t: ");
  scanf("%d", &t);
  for(i=1; i<=t;i++){
    scanf("%d", &n2);
    for(j=2;j<n2;j++){
      if(n2%j==0)
      flag=0;
    }
      if(flag)
        count=count+n2;


}
  printf("%d", count);}
