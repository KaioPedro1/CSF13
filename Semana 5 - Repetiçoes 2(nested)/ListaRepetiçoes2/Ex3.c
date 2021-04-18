/*3. Dado n inteiro e maior que zero (fornecido pelo usu´ario), fazer um programa para imprimir o
gr´afico da fun¸c˜ao x
2+ x + 1 para x=-n at´e n. O programa deve imprimir o gr´afico rotacionado
de 90o usando como ordenadas o eixo horizontal e como abscissas o eixo vertical, da seguinte
forma:
-5 .....................*
-4 .............*
-3 .......*
:
3 .............*
4 .....................*
5 ...............................**/
#include <stdio.h>
int calc(x){
  int y;
  y=(x*x)+x+1;
  return(y);
}

int main() {
  int n=5,m=-5, i,j;
  for(i=m;i<=n;i++){
    printf("%d ", i);
      for(j=1;j<=calc(i);j++)
        printf(".");
     printf("*\n");

  }
  return 0;
}
