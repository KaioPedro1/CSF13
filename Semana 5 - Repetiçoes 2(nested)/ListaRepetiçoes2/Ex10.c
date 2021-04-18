/*Fa¸ca um programa que calcule o menor n´umero divis´ıvel por cada um dos n´umeros de 1 a 20.
Ex: 2520 ´e o menor n´umero que pode ser dividido por cada um dos n´umeros de 1 a 10, sem
sobrar resto.*/
#include <stdio.h>

int main(void) {
  int i=2,j,num=2;
  while(i<=20){
    if(num%i==0)
      i++;
      else{
        num++;
        i=2;}}
        printf("%d", num);
}
