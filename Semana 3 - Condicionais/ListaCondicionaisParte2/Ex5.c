#include <stdio.h>

int main()
{
  float A,G,ra,rg;
  float calc1,calc2;
  printf("Digite o pre�o por litro do �lcool: ");
  scanf("%f", &A);
  printf("Digite o pre�o por litro da gasolina: ");
  scanf("%f", &G);
  printf("Informe o rendimento do veiculo no �lcool: ");
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
