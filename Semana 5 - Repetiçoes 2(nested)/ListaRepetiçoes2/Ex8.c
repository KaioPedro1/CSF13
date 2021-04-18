/*8. Fa¸ca um programa que verifica se os d´ıgitos de um valor n fornecido pelo usu´ario s˜ao todos iguais
entre si.
*/
#include <stdio.h>

int main(void) {
  int n,res,res2,flag=0;
  printf("informe n: ");
  scanf("%d", &n);
  res=n%10;
  res2=n%10;
  while(n>0){
    res=n%10;
    if(res==res2)
    n=n/10;
    else{
      flag=1;
      break;
    }
}
if(flag)
printf("Não sao iguais.");
else
printf("São iguais");

  return 0;
}
