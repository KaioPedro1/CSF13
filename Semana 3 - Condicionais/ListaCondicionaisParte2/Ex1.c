/*Fa�ca um programa que
a) recebe como entrada via teclado uma op�c�ao e tr�es valores. O programa deve calcular e imprimir uma m�edia
correspondente a uma das seguintes op�c�oes:
� A = m�edia aritm�etica.
� P = m�edia ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
� G = m�edia geom�etrica.
� H = m�edia harm�onica*/
#include <stdio.h>
#include <math.h>

int main()
{
  char usuario;
  float valor1,valor2,valor3;
  printf("Informe trez valores: ");
  scanf("%f\n""%f\n""%f", &valor1, &valor2, &valor3);
  printf("Qual m�dia voc� deseja calcular?\n A para aritm�tica\n P para ponderada \n G para geometrica \n H para harmonica\n");
  scanf(" %c", &usuario);


  if(usuario=='A'|| usuario=='a')
  {
      float aritm=(valor1+valor2+valor3)/3;
      printf("%f", aritm);
  }
  else if(usuario=='P'||usuario=='p')
  {
        float ponderada=(valor1+(valor2*2)+(valor3*3))/5;
          printf("%f", ponderada);
  }
  else if(usuario=='G'||usuario=='g')
  {
    if(valor1&&valor2&&valor3>0)
    {
            float geometrica=(cbrt(valor1*valor2*valor3));
    }
    else
    printf("N�o foi possivel calcular o valor dessa m�dia geometrica");
  }
  else if (usuario=='H'||usuario=='h')
  {
            float harmonica=3/(pow(valor1,-1))+(pow(valor2,-1)+(pow(valor3,-1)));
            printf("%f", harmonica);
  }
  else
  printf("N�o foi possivel encontra a m�dia selecionada");
  return 0;
}
