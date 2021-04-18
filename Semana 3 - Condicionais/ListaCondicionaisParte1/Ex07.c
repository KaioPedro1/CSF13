
/*Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano. A seguir, determine a
qual quadrante pertence o ponto. Analise tamb´em se est´a sobre um dos eixos cartesianos ou na origem (x = y = 0).*/
#include <stdio.h>

int main() {
  float x,y;
  printf("Informe x: ");
  scanf("%f", &x);
  printf("Informe y: ");
  scanf("%f", &y);
if (x==0&&y==0)
    printf("Origem.");
else if (x>0)
{
  if(y>0)
    printf("Q1");
  else if (y<0)
    printf("Q4");
  else
    printf("Eixo x");
}
else if (x<0)
{
  if(y>0)
    printf("Q2");
  else if (y<0)
    printf("Q3");

}
  else
    printf("Eixo y");

  return 0;
}
