/*Fa¸ca um programa que tendo como entradas (via teclado) a base e altura de um retˆangulo, calcule o per´ımetro (2*base
+ 2*altura) e a ´area (base*altura) e imprima se o per´ımetro ´e maior que a ´area.*/
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
{
  printf("Perimetro eh maior que a base.");
}

  return 0;
}
