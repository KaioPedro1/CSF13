/*3. Escreva uma fun¸c˜ao que recebe um caractere e retorna 1 se o caractere for uma letra mai´uscula, 2 se for uma letra
min´uscula, 3 se for um d´ıgito e 0 do contr´ario. Prot´otipo: int testaTipoChar (char c);
*/
#include <stdio.h>

int testaTipoChar (char c);
int main() {
  char recebe;
  scanf(" %c", &recebe);
  printf("Retorno: %d", testaTipoChar(recebe));
  return 0;
}
/*TABELA ASCII*/
int testaTipoChar (char c){
  if(c>=65&&c<=90)
    return 1;
    else if (c>=97&&c<=122)
      return 2;
      else if (c>=48&&c<=57)
        return 3;
      else
          return 0;
}
