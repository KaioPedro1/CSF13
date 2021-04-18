/*11. Um n´umero a ´e dito permuta¸c˜ao de um n´umero b se os d´ıgitos de a formam uma permuta¸c˜ao dos d´ıgitos de b. Exemplo:
5412434 ´e uma permuta¸c˜ao de 4321445, mas n˜ao ´e uma permuta¸c˜ao de 4312455. Vocˆe dever´a:
(a) Fazer uma fun¸c˜ao que, dado um valor inteiro n e um d´ıgito d, 0 ¤ d ¤ 9, devolve quantas vezes o d´ıgito d aparece
em n. Prot´otipo:
int contadigitos(int n, int d)
(b) Usando a fun¸c˜ao do item anterior, criar uma fun¸c˜ao que, dados dois inteiros positivos n1 e n2, retorne 1 se n1 ´e
permuta¸c˜ao de n2 ou 0 caso contr´ario. Prot´otipo:
int ehPermutacao(int n1, int n2)*/
#include <stdio.h>
int contadigitos(int n, int d);
int ehPermutacao(int n1, int n2);
int main() {
  int num,num2;
  printf("Informe dois números: ");
  scanf("%d" "%d", &num,&num2);
  if(ehPermutacao(num,num2))
    printf("%d é permutaçao de %d", num,num2);
  else
    printf("Não é permutação.");

  return 0;
}
int contadigitos(int n, int d){
  int contador=0,resto;
  while(n>0){
    resto=n%10;
    if(resto==d)
      contador++;
    n/=10;
  }
  return contador;
}
int ehPermutacao(int n1, int n2){
  int i, contadorn1,contadorn2;
    for(i=1;i<9;i++){
      if(contadigitos(n1,i)!=contadigitos(n2,i)){
        return 0;
      }
      }
      return 1;
}
