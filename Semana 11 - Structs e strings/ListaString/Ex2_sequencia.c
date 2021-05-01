#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int amoutOfRepeated (char* word, char *phrase);
int main(){
    char word[SIZE], phrase[SIZE];
    printf("Digite uma frase: ");
        fgets(phrase, SIZE, stdin);
    printf("Digite a palavra que se repete: ");
        fgets(word, SIZE, stdin);
    printf("%d\n", amoutOfRepeated(word, phrase));
}

int amoutOfRepeated (char* word, char *phrase){
    int i,j=0, aux=0, count=0, flag=0;
    for(i=0;phrase[i]!='\0';i++){
        aux=i+j;
        flag=0;
        for(j=0;j<strlen(word)-1;j++){ //ESQUECI DO -1 E ESTAVA CONTANDO 1 A MAIS.
            if(phrase[aux]!=word[j]){
                flag=1;           
            }
            else
                aux++;   
        }
        if(flag==0)
            count++;
    }
    return (count);
}