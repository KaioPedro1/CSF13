/*Leia 2 valores inteiros x e y (suponha que x>y). A seguir, calcule e mostre quantos n´umeros ´ımpares existem entre
eles.*/
#include <stdio.h>

int main() {
  int x,y,dif,i,k=0,p=0;
  printf("Por favor digite o valor de x e y(separados por espaço): ");
  scanf("%d" "%d", &x,&y);
  for(i=0,dif=x-y; i<dif ; i++){
    if(i%2!=0)
    k++;
    else
    p++;
  }

    printf("Qtd de impar: %d\n", k);
    printf("Qtd de par: %d\n", p);
  return 0;
}
