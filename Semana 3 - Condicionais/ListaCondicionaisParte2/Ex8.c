#include <stdio.h>
/*ordena em ordem crescente as medidas da janela*/
void ordena(int a, int b, int c, int base ,int altura){
  int aux, aux2;
  if(b>=c){
      aux=b;
      b=c;
      c=aux;
    }
    if(a>=b){
      aux=a;
      a=b;
      b=aux;
    }
    if(b>=c){
      aux=b;
      b=c;
      c=aux;
    }
    if (base<altura){
        aux2=base;
        altura=base;
        base=aux;
        printf("%d""%d", base, altura);
    }


}
/*void ordena2(int base, int altura)
  {
    int aux;
    if (base<altura)
    {
        aux=base;
        altura=base;
        base=aux;
        printf("%d""%d", base, altura);
    }

  }
*/
int main()
{
  /*poderia ter usado arrays/matriz para receber os valores*/
  int a,b,c,base,altura;
  printf("Informe as 3 dimensões da caixa\nA= ");
  scanf("%d",&a);
  printf("B= ");
  scanf("%d",&b);
  printf("C= ");
  scanf("%d",&c);
  printf("Informe as 2 dimensões da janela\nBase= ");
  scanf("%d",&base);
  printf("Informe as 2 dimensões da janela\nBase= ");
  scanf("%d",&altura);
  ordena(a,b,c,base,altura);
if (c<=base&&b<=altura){
  printf("S");
}
else
printf("N");
return 0;
}











