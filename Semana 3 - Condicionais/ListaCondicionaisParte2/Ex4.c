/*Dados 3 valores A, B, C (lados do triˆangulo) fornecidos pelo usu´ario via teclado, implemente um programa para verificar
se estes valores formam um triˆangulo, e em caso afirmativo, classific´a-lo como equil´atero, is´osceles ou escaleno (imprimir
mensagem informando o tipo ou uma mensagem espec´ıfica caso n˜ao formem um triˆangulo).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float A,B,C;
  printf("Informe trez valores: ");
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  if(A<B+C&&A>fabs(B-C)&&B<A+C&&B>fabs(A-C)&&C<A+B&&C>fabs(A-B))
  {
      if(A==B&&A==C)
          printf("Triangulo equilátero");
      else if (A!=B&&A!=C&&B!=C)
          printf("Triangulo escaleno");
      else
          printf("Triangulo isósceles");
  }
  else
    printf("Valores digitados não formam um triangulo");

  return 0;
}
