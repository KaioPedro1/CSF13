/*10. Dados dois n´umeros inteiros positivos, fa¸ca uma fun¸c˜ao com prot´otipo
Prot´otipo: int retornaMDC(int num1, int num2);
que retorne o m´aximo divisor comum entre eles usando o algoritmo de Euclides. Ele ´e baseado em subtra¸c˜oes sucessivas
e consiste no seguinte: a cada ciclo o maior valor ´e substitu´ıdo pelo valor da diferen¸ca entre o maior valor e o menor
valor at´e que os dois valores passam a ser iguais; quando passam a ser iguais, o m´aximo divisor comum procurado ´e
um deles (tanto faz qual j´a que s˜ao iguais). */
#include <stdio.h>
int retornaMDC(int num1, int num2);
int main() {
  int n1, n2;
  printf("Informe dois números separados por espaço: ");
  scanf("%d" "%d", &n1, &n2);
  printf("%d",retornaMDC(n1,n2));
  return 0;
}
int retornaMDC(int num1, int num2){
  int aux;
    while (num1!=num2){
      if(num1>num2)
        num1=num1-num2;
      else
        num2=num2-num1;
}
return num1;
}
