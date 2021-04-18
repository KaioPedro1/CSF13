/*Escreva uma fun¸c˜ao com o seguinte prot´otipo
int calculaDigitoVerificador(int num);
que receba como entrada um n´umero de trˆes d´ıgitos e retorne o d´ıgito verificador calculado da seguinte forma:
x4 
¸
3
i1
i  xi

%11
%10
em que xi denota o i-´esimo d´ıgito do n´umero.
Exemplo
193 D´ıgito verificador: 6
542 D´ıgito verificador: 8
702 D´ıgito verificador: 2
900 D´ıgito verificador: 9
*/
#include <stdio.h>
#define indice 3

int calculaDigitoVerificador(int num);
int main(void) {
  int n;
  printf("Digite um número de 3 dígitos: ");
  scanf("%d", &n);
  printf("%d Dígito verificador: %d", n,calculaDigitoVerificador(n));
  return 0;
}
int calculaDigitoVerificador(int num){
  int i,sigma=0;

  for(i=indice;i>=0;i--){
    sigma=sigma+(i*(num%10));
    num/=10;
  }
  return ((sigma)%11)%10;

}
