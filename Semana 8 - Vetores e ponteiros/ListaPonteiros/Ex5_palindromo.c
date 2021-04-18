/*Fa¸ca um programa que utilize esta fun¸c˜ao para determinar se um determinado inteiro positivo n ´e pal´ındromo. Suponha
que n n˜ao cont´em o d´ıgito 0. Aten¸c˜ao: vocˆe n˜ao deve modificar a fun¸c˜ao dada no enunciado! Apenas invoc´a-la de
forma adequada.
*/
#include<stdio.h>
void removeExtremos(int *n, int *pri, int *ult);
int main(){
    int first,last,number,palindrome=1;
    printf("Por favor, informe um numero intero positivo: ");
    scanf("%d", &number);
    while(number>0){
        removeExtremos(&number,&first,&last);
        if(first!=last)
        palindrome=0;//esqueci do break
        break;
    }
    if(palindrome==1)
    printf("Eh palindromo\n");
    else if(palindrome==0)
    printf("Nao eh palindromo\n");
}
void removeExtremos(int *n, int *pri, int *ult){
int tn,pot = 1;
tn = *n;
while(tn >= 10){
tn = tn/10;
pot *= 10;
}
*pri = *n / pot;
*ult = *n % 10;
*n = *n % pot;
*n = *n / 10;}