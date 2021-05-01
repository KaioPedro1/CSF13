#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void intersperseString(char *first, char *second, char *third);
int main(){
   char firstString[SIZE]="Em de espeto de", secondString[SIZE]="casa ferreiro eh pau", thirdString[SIZE];
    intersperseString(firstString, secondString, thirdString);
    printf("%s\n", thirdString);
}
//COISA FEIA E CONFUSA, NÃO ESTOU ORGULHO DISSO
void intersperseString(char *first, char *second, char *third){
    int i=0,j=0, aux, index=0; //index é a posição do terceiro vetor, aux é usado pro primeiro loop e mais nada
    for(aux=0;first[aux]!='\0'&&second[aux]!='\0'; aux++, i++,j++, index++){// todos esses incrementos de variaveis é horrivel, deve existir uma maneira mair limpa de resolver isso
        while(first[i]!=' '&&first[i]!='\0'){
            third[index]=first[i];
            i++;
            index++;
        }
    third[index]=' ';
    index++;
        while(second[j]!=' '&&second[j]!='\0'){
            third[index]=second[j];
            j++;
            index++;
        }
    third[index]=' ';
}
}