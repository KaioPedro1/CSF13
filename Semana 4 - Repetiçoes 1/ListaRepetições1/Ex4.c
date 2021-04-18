/*Leia um valor inteiro n, que representa o n´umero de casos de teste que vem a seguir. Cada caso de teste consiste de
3 valores reais. Apresente a m´edia ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor
tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.*/
#include <stdio.h>

int main() {
  int n,i,i2;
  float matriz[4][4]={[0][0]=2, [0][1]=3, [0][2]=5};/*pesos na linha 0*/
  printf("Por favor, informe o número de testes: ");
  scanf("%d", &n);
  for(i2=0; i2<n; i2++){/*primeiro "for" é para repetir o numero de testes*/
    for(i=0; i<3; i++){
      printf("Informe a nota número %d: ", i+1);
      scanf("%f", &matriz[1][i]);/*armazena o valor digitado na linha1*/
      matriz[2][i]=(matriz[0][i]*matriz[1][i]);/*armazena o resultado da multiplicação entre o peso e o valor digitado na linha 2 da matriz; quando o loop reseta, o valor da linha 1 é substituido*/
  }
  matriz[3][i2]=matriz[2][0]+matriz[2][1]+matriz[2][2];/* armazena a soma da linha 2*/
  printf("\nMédia %d é %.1f\n",i2+1,matriz[3][i2]/10);
  }
  return 0;
}
