/*1. Escreva um programa que preenche os elementos de um vetor de forma a permitir apenas a inser¸c˜ao de valores distintos.
Caso o usu´ario tente inserir um valor j´a existente, o programa deve alertar a duplicidade e solicitar um novo valor*/
#include <stdio.h>
#define size 5
int main(){
    int checkString[size], i,j, flag;  
    for (i=0; i<size; i++){
        scanf("%d", &checkString[i]);
            for(j=i-1; j>=0; j--){
                while(checkString[i]==checkString[j]){
                    flag=1;
                    printf("Numero duplicado, informe um novo valor: ");
                    scanf("%d", &checkString[i]);
                }
                if(flag==1){
                    j=i;
                    flag=0;
            }
    }
}
for(i=0;i<size;i++){
    printf("%d", checkString[i]);
}
}