/*1. Escreva um programa que preenche os elementos de um vetor de forma a permitir apenas a inser¸c˜ao de valores distintos.
Caso o usu´ario tente inserir um valor j´a existente, o programa deve alertar a duplicidade e solicitar um novo valor*/
#include <stdio.h>
#define size 5
int main(){
    int checkArray[size], i,j, flag;  
    for (i=0; i<size; i++){
        scanf("%d", &checkArray[i]);
            for(j=i-1; j>=0; j--){
                while(checkArray[i]==checkArray[j]){
                    flag=1;
                    printf("Numero duplicado, informe um novo valor: ");
                    scanf("%d", &checkArray[i]);
                }
                if(flag==1){
                    j=i;
                    flag=0;
            }
    }
}
for(i=0;i<size;i++){
    printf("%d", checkArray[i]);
}
}