/*Modifique o programa anterior para que imprima qual dos dois ´e maior (per´ımetro ou ´area) ou se s˜ao iguais*/

#include <stdio.h>

int main()
{
float base,altura;
  printf("Informe a base: ");
  scanf("%f", &base);
  printf("Informe a altura: ");
  scanf("%f", &altura);
double perimetro=((2*base)+(2*altura)),area=(base*altura);
if(perimetro>area)
  printf("Perimetro eh maior que a base.");
else if(area>perimetro)
  printf("Area eh maior que o perimetro.");
else
  printf("perimetro e base sao iguais.");
  return 0;
}
