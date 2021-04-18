/*13. Fa¸ca uma fun¸c˜ao que, dados dois inteiros positivos a e b verifica se o menor deles ´e segmento do outro. A fun¸c˜ao deve
retornar 1 se a for segmento de b, 2 se b for segmento de a ou 0, caso contr´ario. Vocˆe deve usar a fun¸c˜ao do item
anterior nessa solu¸c˜ao.*/
#include <stdio.h>
int ultimosdigitos(int a,int b);
int segmento(int a2, int b2);
int main() {
  int num1,num2;
  scanf("%d" "%d", &num1,&num2);
  printf("%d\n", segmento(num1,num2));
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
int segmento(int a2, int b2){
  int aux,flag=0;
  if(b2>=a2)
  {
    aux=b2;
    b2=a2;
    a2=aux;
    flag=1;
  }
  while(a2>0){
    if(a2%10!=b2%10)
      a2/=10;
    else if(ultimosdigitos(a2,b2)==1){
      if(flag==1)
        return 1;
      else
        return 2;
    }
    else if(ultimosdigitos(a2,b2)==0)
      a2/=10;
  }
  return 0;
  }

