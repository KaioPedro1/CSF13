
/*8. Dadas a data atual e a data de nascimento de uma pessoa,
• (a) calcular a sua idade.
Complete o programa do item anterior, informando tamb´em
• (b) o dia da semana em que a pessoa nasceu1
!
*/

#include <stdio.h>

int main() {
  int atual_1,atual_2,atual_3,idade_1,idade_2,idade_3, aux;
  printf("Informe a data de hoje no formato dia/mes/ano: ");
  scanf("%d/""%d/""%d", &atual_1,&atual_2,&atual_3);
  printf("Informe a sua idade no formato dia/mes/ano: ");
  scanf("%d/""%d/""%d", &idade_1,&idade_2,&idade_3);
 /**calcular idade**/
  aux=atual_3-idade_3;
if(atual_2>=idade_2){
  if(atual_2==idade_2&&atual_1<idade_1)
  {
    printf("Você tem %d anos", aux-1);
  }
  else
  printf("Voce tem %d anos", aux);
}
else
printf("Voce tem %d anos", aux);
/*final do calculo*/
/**(b)dia da semana, pesquisei no google*/
int a,b,c,d,soma;
a=idade_3-1900;
/* definindo b*/
b=a/4;
if(b%4==0&&b%100==0&&b%400==0&&idade_2<=2&&idade_1<29)
  b=(a/4)-1;
  /*b definido*/
  /*definindo c*/
if(idade_2==1||idade_2==10)
  c=0;
else if(idade_2==2||idade_2==3||idade_2==11)
  c=3;
else if(idade_2==4 ||idade_2==6)
  c=6;
else if(idade_2==5)
  c=1;
else if (idade_2==6)
  c=4;
else if (idade_2==8)
  c=2;
else if (idade_2==9 || idade_2==12)
  c=5;
  /*c definido*/
d=idade_1-1;
soma=(a+b+c+d)%7;
/*tabela dada*/
if(soma==0)
printf("\n Nasceu em uma segunda");
else if(soma==1)
printf("\nNasceu terca");
else if(soma==2)
printf("\nNasceu quarta");
else if(soma==3)
printf("\nNasceu quinta");
else if(soma==4)
printf("\nNasceu sexta");
else if(soma==5)
printf("\nNasceusabado");
else
printf("\nNasceu domingo");
  return 0;
}
