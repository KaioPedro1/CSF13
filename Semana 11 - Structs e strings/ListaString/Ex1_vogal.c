#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
void fillString(char *s);
int checkVowels(char *s, char character);
void totalVowels(char *s, char *vowels,int *storeInArray);
void printStar(char *vowels, int *array);
/*SÓ FUNCIONA COM LETRA MINUSCULA, NÃO DEU TEMPO DE MODIFICAR PARA FUNCIONAR COM LETRA MAIUSCULA*/
int main(){
    int i, total[6];
    char str[SIZE],vowels[6]="aeiou";
    fillString(str);
    totalVowels(str, vowels, total);
    printStar(vowels, total);

return 0;
}

void fillString(char *s){
    printf("Digite uma string: ");
        fgets(s, SIZE, stdin);
}

int checkVowels(char *s, char character){
    int i,count=0;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]==character){
            count++;
        }
    }
    return (count);
}

void totalVowels(char *s, char *vowels, int *storeInArray){
    int i;
    for(i=0; i<strlen(vowels); i++){ //repete 5 vezes que é a quantidade de vogais
    storeInArray[i]=checkVowels(s, vowels[i]);
    } 
}
void printStar(char *vowels, int *array){
    int i, j;
    for(i=0;i<strlen(vowels);i++){
        printf("%c = ", vowels[i]);
        for(j=0;j<array[i]; j++){
            printf("*");
        }
        printf("  (%d)\n", array[i]);
    }
}

