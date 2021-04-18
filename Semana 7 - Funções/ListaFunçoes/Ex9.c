/*
(b) Escreva uma fun�c�ao do tipo void que receba como par�ametro um valor representando o IMC e mostre uma
mensagem de acordo com a sua condi�c�ao:
IMC Mensagem
abaixo de 18.5 Voc�e est�a abaixo do peso.
entre 18.5 e 25 Voc�e est�a com o peso normal.
entre 25 e 30 Voc�e est�a acima do peso.
acima de 30 Voc�e est�a obeso.
Prot�otipo:
void imprimeMsgIMC(float imc)
(c) Na fun�c�ao main(), leia os dados de entrada adequados e invoque as duas fun�c�oes criadas acima.*/
#include <stdio.h>
#define abaixoPeso 18.5
#define pesoNormal 25
#define acimaPeso 30
float calculaIMC(float altura, float peso);
void imprimeMsgIMC(float imc);
int main() {
  float altura, peso;
  printf("Digite sua altura e peso(separados por espa�o): ");
  scanf("%f" "%f", &altura, &peso);
  imprimeMsgIMC(calculaIMC(altura,peso));
  return 0;
}
float calculaIMC(float altura, float peso){
  float imc;
  imc=(peso/(altura*altura));
  return imc;
}
void imprimeMsgIMC(float imc){
  if(imc<abaixoPeso)
    printf("Abaixo de 18.5, Voc� est� abaixo do peso.");
  else if(imc<pesoNormal)
    printf("Entre 18.5 e 25 Voc� est� com o peso normal.");
     else if(imc<acimaPeso)
    printf("Entre 18.5 e 25 Voc� est� acima do peso");
    else
    printf("Acima de 30 Voc� est� obeso.");
}
