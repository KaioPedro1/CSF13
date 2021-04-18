/*Um n�umero n no intervalo de 100 a 999 �e chamado n�umero de Angstron se obedece `a seguinte regra:
n = centena3 + dezena3 + unidade3*/

#include <stdio.h>
#include <math.h>
int calc_angstron(int x,int y){
 int centena,dezena,unidade;
      unidade=pow((x%100%10),3);
      dezena=pow((x%100/10),3);
      centena=pow((x/100),3);
      y=centena+dezena+unidade;
return(y);
}
int main()
{
  int inteiro;
  printf("Digite um numero inteiro no intervalo [100;999]: ");
  scanf("%d", &inteiro);
  if(inteiro>=100&&inteiro<=999)
  {
   int angstron=calc_angstron(inteiro,angstron);
    if(inteiro==angstron)
    {
        printf("O numero informado � considerado um numero de Angstron.");
    }
    else
        printf("O numero informado n�o � considerado um numero de Angstron.");
  }
  else
  printf("O n�mero digitado n�o est� no intervalo solicitado.");
  return 0;
}
