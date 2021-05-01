#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void removeConsonantsAndSpaces(char *name, char *neighborhood, char* password);

int main(){
    char name[SIZE], neighborhood[SIZE], password[SIZE],*teste; 
    printf("Digite o seu nome: ");
        fgets(name, SIZE, stdin);
    printf("Digite o bairro onde voce mora: ");
        fgets(neighborhood, SIZE, stdin);
        removeConsonantsAndSpaces(name, neighborhood, password);
        printf("Senha gerada: %s\n", password);
}

void removeConsonantsAndSpaces(char *name, char *neighborhood, char* password){
    int i,j, index=0;
    char vowels[12]="aeiouAEIOU";
    for(i=0;i<strlen(name);i++){
        for(j=0;j<strlen(vowels);j++){
            if(name[i]==vowels[j]){
                password[index]=name[i];
                index++;
            }
        }
    }
            for(i=0;i<strlen(neighborhood);i++){
                for(j=0;j<strlen(vowels);j++){
                    if(neighborhood[i]==vowels[j]){
                        password[index]=neighborhood[i];
                        index++;
                    }
                }
            }
}

