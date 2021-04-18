#include <stdio.h>

int main()
{
  float A,G,ra,rg;
  float calc1,calc2;
  printf("Digite o preço por litro do álcool: ");
  scanf("%f", &A);
  printf("Digite o preço por litro da gasolina: ");
  scanf("%f", &G);
  printf("Informe o rendimento do veiculo no álcool: ");
  scanf("%f", &ra);
  printf("Informe o rendimento do veiculo na gasolina: ");
  scanf("%f", &rg);
  calc1=ra/A;
  calc2=rg/G;
  if(calc1>calc2)
    printf("A");
  else
    printf("G");

return 0;
}
