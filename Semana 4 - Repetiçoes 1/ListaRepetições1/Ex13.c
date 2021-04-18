/*13. Chico tem 1,50 metro e cresce 2 cent´ımetros por ano, enquanto Z´e tem 1,10 metro e cresce 3 cent´ımetros por ano.
Construa um programa que calcule e imprima quantos anos ser˜ao necess´arios para que Z´e seja maior que Chico*/
#include <stdio.h>

int main() {
  float chico=1.50,ze=1.10,cmchico=0.2, cmze=0.3;
  int ano;
  for(ano=0; chico>=ze; ano++){
    chico=chico+cmchico;
    ze=ze+cmze;
  }
  printf("Será necessario %d anos para ze ser maior que chico.\n", ano);

  return 0;
}
