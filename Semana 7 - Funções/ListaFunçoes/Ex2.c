#include <stdio.h>

int arredonda (float x);
int main() {
  float n;
  printf("Informe n: ");
  scanf("%f", &n);
  printf("Arredondado é : %d", arredonda(n));
  return 0;
}
int arredonda (float x){
  int inteiro=x;
  float resto=(x-inteiro)*10;
       //negativo
    if(resto<0){
      if(resto<=-5){
        inteiro--;
          return inteiro;
      }
        else
          return inteiro;
    }  //positivo
      if(resto>=5){
        inteiro++;
        return inteiro;}
          else
           return inteiro;
}
