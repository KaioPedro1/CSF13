/*6. No “par” ou “´ımpar” tradicional cada jogador i escolhe um n´umero ni e um dos poss´ıveis restos da divis˜ao inteira da
soma (n1 + n2) por 2: 0 (par) ou 1 (´ımpar). No “par” ou “´ımpar” de trˆes jogadores cada jogador i escolhe um n´umero
ni e um dos poss´ıveis restos da divis˜ao inteira de (n1 + n2 + n3) por 3: 0, 1 ou 2. O vencedor ´e aquele que escolher o
resto que foi efetivamente calculado.
(a) Escreva uma fun¸c˜ao que, dados como entrada trˆes n´umeros inteiros, n1, n2 e n3, que correspondem aos n´umeros
escolhidos pelos jogadores Alexandre, Maria e Rafael, respectivamente, retorne o resto encontrado.
Prot´otipo: int retornaResto(int alexandre, int maria, int rafael)
(b) Fa¸ca uma fun¸c˜ao tipo void (tamb´em chamada de procedimento) que, dado um valor de entrada entre 0 e 2,
imprima na tela o vencedor. Considere que Alexandre sempre escolhe o resto 0, Maria escolhe o resto 1 e Rafael
escolhe o resto 2.
Prot´otipo: void imprimeVencedor(int resto);
(c) Na fun¸c˜ao main(), leia os dados de entrada adequados e invoque as duas fun¸c˜oes criadas acima.*/
#include <stdio.h>
int retornaResto(int alexandre, int maria, int rafael);
void imprimeVencedor(int resto);
int main(void) {
  int ale,ma,ra;
  printf("Digite 3 números entre 0 a 2(separador por espaço): ");
  scanf("%d" "%d" "%d" ,&ale,&ma,&ra);
  imprimeVencedor(retornaResto(ale,ma,ra));
  return 0;
}
int retornaResto(int alexandre, int maria, int rafael){
  return ((alexandre+maria+rafael)%3);
}
void imprimeVencedor(int resto){
  if(resto==0)
  printf("Alexandre é o vencedor.");
  else if(resto==1)
  printf("Maria é a vencedora.");
   else if(resto==2)
  printf("Rafael é o vencedor.");
  else
  printf("Algum número informado não está no intervalo,");
}
