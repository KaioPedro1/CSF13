/*Construa uma fun¸c˜ao que, dados dois inteiros positivos a e b verifica se b corresponde aos ´ultimos d´ıgitos de a. A
fun¸c˜ao deve retornar 1 se a condi¸c˜ao for satisfeita ou 0, caso contr´ario. Exemplo:
*/
#include <stdio.h>
int ultimosdigitos(int a,int b);
int main() {
  int num1,num2;
  scanf("%d" "%d", &num1,&num2);
  printf("%d\n", ultimosdigitos(num1,num2));
  return 0;
}
int ultimosdigitos(int a,int b){
  int restoa,restob;
  while(a>0&&b>0){
    restoa=a%10;
    restob=b%10;
      if(restoa!=restob)
        return 0;
    a/=10;
    b/=10;
  }
  return 1;
}
