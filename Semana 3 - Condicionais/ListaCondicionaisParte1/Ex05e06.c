/*Fa¸ca um programa que dados os coeficientes (a,b e c) de uma equa¸c˜ao do 2o grau, calcule e imprima suas ra´ızes (caso
a equa¸c˜ao possua ra´ızes imagin´arias, o programa n˜ao deve imprimir nada).*/

#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  float delta;
  printf("Informe o quociente A da equação de segundo grau: ");
  scanf("%f", &a);
  printf("Informe o quociente B da equação de segundo grau: ");
  scanf("%f", &b);
  printf("Informe o quociente C da equação de segundo grau: ");
  scanf("%f", &c);
  delta=(b*b)-(4*a*c);
  float raiz_positiva=((-b+sqrt(delta))/2*a);
  float raiz_negativa=((-b-sqrt(delta))/2*a);
  if(delta<0)
    printf("Não existem raizes.\n");
  else if(delta==0)
    printf("Possui somente uma raiz: %f", raiz_positiva);

  else
    printf("Possui duas raizes %f e %f \n", raiz_negativa, raiz_positiva);
  return 0;
}
/*#include <stdio.h>
#include<math.h>
float calc_delta(float A, float B, float C)
{
  return(B*B)-(4*A*C);
}
float raiz_positiva(float A, float B, float delta)
{
  return((-B+sqrt(delta))/2*A);
}
float raiz_negativa(float A, float B, float delta)
{
  return((-B-sqrt(delta))/2*A);
}

int main()
{
  float a,b,c;
  float delta;
  printf("Informe o quociente A da equação de segundo grau: ");
  scanf("%f", &a);
  printf("Informe o quociente B da equação de segundo grau: ");
  scanf("%f", &b);
  printf("Informe o quociente C da equação de segundo grau: ");
  scanf("%f", &c);
  delta=calc_delta(a,b,c);
  if(delta<0)
    printf("Não existem raizes.\n");
  else if(delta==0)
    printf("Possui somente uma raiz: %f", raiz_positiva(a,b,delta));
  else
    printf("Possui duas raizes %f e %f \n", raiz_positiva(a,b,delta), raiz_negativa(a,b,delta));


  return 0;
}*/

