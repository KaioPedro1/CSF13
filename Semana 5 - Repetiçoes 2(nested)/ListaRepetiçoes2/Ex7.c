/*Construa um programa que leia um n�umero n natural e verifica se ele �e triangular ou n�ao. Dizemos que um n�umero natural �e triangular se ele �e produto de tr�es n�umeros naturais consecutivos.
Exemplo: 120 �e triangular, pois 4 � 5 � 6 = 120.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
  int i=1,tri;
  printf("Por favor, informe um n�mero: ");
  scanf("%d", &tri);
  while(i<=500){
    if((i*(i+1)*(i+2))==tri){
      printf("%d � triangular, pois %d * %d * %d = %d", tri,i,i+1,i+2,(i*(i+1)*(i+2)));
      exit (0);}
  else
    i++;}
    printf("N�o � triangular");

return 0;


}
