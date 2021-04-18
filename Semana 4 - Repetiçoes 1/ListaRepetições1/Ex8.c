/*O n´umero 3025 possui a seguinte caracter´ıstica: 30 + 25 = 55− > 55 ∗ 55 = 3025. Fazer um programa para obter todos
os n´umeros de 4 algarismos com a mesma caracter´ıstica do n´umero 3025.*/
#include <stdio.h>

int main() {
  int x=9999,i,prim,segu;
  for(i=1000; i<=x; i++){
    prim=i%100; segu=i/100;
    if((prim+segu)*(prim+segu)==i)
    printf("%d\n", i);
  }
  return 0;
}
