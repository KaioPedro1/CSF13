/*Escreva um programa que repita a leitura de uma senha at´e que ela seja v´alida. Para cada leitura de senha incorreta
informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a
mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta ´e o valor 2002.*/
#include <stdio.h>
/*desnecessario, só fiz pra testar.*/
void asterisco (){
  int a;
  for(a=0; a<40; a++){
  printf("*");}
  printf("\n");
}

/* DUVIDA SE USA STRING OU NÃO*/
int main() {
  int senha;
  do{
  printf("Digite a sua senha: ");
  scanf("%d", &senha);
    if(senha==2002){
      asterisco();
      printf("\t\tAcesso permitido.\n");
      asterisco();}
    else{
      asterisco();
      printf("\t\tSenha invalida.\n");
      asterisco();}
  }
  while(senha!=2002);
  return 0;
}
