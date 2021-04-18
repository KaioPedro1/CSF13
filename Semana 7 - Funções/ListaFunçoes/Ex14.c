/*14. Um n´umero ´e dito regular se sua decomposi¸c˜ao em fatores primos apresenta apenas potˆencias de 2, 3 e 5. Fa¸ca uma
fun¸c˜ao que retorne 1 se um n´umero ´e regular ou 0, caso contr´ario.
*/
#include <stdio.h>
int ehRegular(int teste);
int main() {
  int regular;
  printf("Digite um número: ");
  scanf("%d", &regular);
    if(ehRegular(regular)==1)
       printf("É regular");
       else if (ehRegular(regular)==0)
       printf("Não é regular");

  return 0;
}
int ehRegular(int teste){
  int i;
  for(i=2;i<=5;i++){
    while(teste%i==0){
      teste/=i;
    }
}
  if(teste==1)
  return 1;
  else
  return 0;
}
