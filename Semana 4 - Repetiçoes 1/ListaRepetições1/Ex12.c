#include <stdio.h>

int main() {
  int n1, n2,i=2,count=1;
  printf("Por favor, informe doi números inteiros, N1 e N2 (separados por espaço): ");
 scanf("%d" "%d", &n1,&n2);
  for(i=2; i<=n1||i<=n2;i++){
    while(n1%i==0||n2%i==0){
      if(n1%i==0&&n2%i!=0){
        n1=n1/i;
        count=count*i;}
        else if(n2%i==0&&n1%i!=0){
            n2=n2/i;
              count=count*i;}
            else{
                n1=n1/i;
                n2=n2/i;
                count=count*i;
            }}
}printf("\nMMC é %d", count);}
