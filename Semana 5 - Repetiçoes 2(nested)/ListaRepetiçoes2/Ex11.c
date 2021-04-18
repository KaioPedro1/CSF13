/*11. Apresentar os n primeiros n´umeros primos a partir de um valor inicial k. Os valores de n e k s˜ao
fornecidos pelo usu´ario - vocˆe dever´a verificar se eles s˜ao positivos.*/
#include <stdio.h>

int main() {
  int n,k,i,j,flag;
  printf("por favor, informe n e k(separados por espaço): ");
  scanf("%d" "%d", &n,&k);
  for(i=1;i<=n;i++){
    flag=1;
    for(j=2;j<k;j++){
      if(k%j==0){
      flag=0;}}
      if(flag){
        printf("%d\t", k);
        k++;}
      else{
        k++;
        i--;}
}}
