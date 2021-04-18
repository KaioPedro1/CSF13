/*Fa¸ca um programa que receba uma op¸c˜ao fornecida pela usu´ario indicando se este deseja converter um n´umero de
bin´ario para decimal (op¸c˜ao 1) ou o contr´ario (op¸c˜ao 2). Depois o usu´ario deve fornece o n´umero e o programa deve
imprimir o resultado da convers˜ao. Esse processo deve ser repetido at´e que o usu´ario forne¸ca a op¸c˜ao 0 (finaliza o
programa).
Prot´otipos:
int bin2dec(int num);
int dec2bin(int num);
1
Exemplo:
Entrada Sa´ıda
2 15 111
1 10010 18
0*/
#include <stdio.h>
#include <math.h>
int dec2bin (int n);
int bin2dec (int n);
int main() {
  int x, valor;
  while(x!=1&&x!=2){
  printf("1 Para conversão de binario para decimal.\n2 Para conversão de decimal para binal.\nEntrada:");
  scanf("%d", &x);
  }
  printf("Digite o valor que será convertido: ");
  scanf("%d", &valor);
  if(x==1)
  printf("%d em decimal é: %d", valor,bin2dec(valor));
  else
  printf("%d em binario é: %d",valor, dec2bin(valor));

  return 0;
}
int dec2bin (int n){
  int mult=1,resto,binario=0;
  while(n>0){
    if(n%2==0)
      resto=0;
    else
      resto=1;
    binario+=(mult*resto);
    n/=2;
    mult*=10;
  }
  return binario;
  }
int bin2dec (int n){
  int resto,mult,decimal=0,i;
  resto=n%10;
  for(i=0;n>0;i++){
    mult=resto*pow(2,i);
    decimal+=mult;
    n/=10;
    resto=n%10;
    }
    return decimal;
}

