/*1. Escreva um programa que preenche os elementos de um vetor de forma a permitir apenas a inser¸c˜ao de valores distintos.
Caso o usu´ario tente inserir um valor j´a existente, o programa deve alertar a duplicidade e solicitar um novo valor*/
#include <stdio.h>

double* allocateArray(int size);
void checkingAndFill(double *array, int size);
int main(){
    int  i,j, flag, size;  
    double *checkArray;
    printf("Por favor, informe a quantidade de itens que deseja armazenar: ");
    scanf("%d", &size);
    checkArray=allocateArray(size);
    checkingAndFill(checkArray, size);
        for(i=0;i<size;i++)
        printf("\t\tVetor [i]= %.2lf\n", checkArray[i]);

    free(checkArray);
}

double* allocateArray(int size){
    double *insideArray,i;
    insideArray=(double*)malloc(sizeof(double)*size);
return (insideArray);
}

void checkingAndFill(double *array, int size){
int i, j , isRepeated=0;
    for(i=0; i<size; i++){
        printf("Vetor[%d] = ", i);
        scanf("%lf", &array[i]);
            for(j=i-1;j>=0;j--){
                while(array[i]==array[j]){
                    isRepeated=1;
                    printf("Numero duplicado, informe um novo valor: ");
                    scanf("%lf", &array[i]);
                }
                if(isRepeated==1){
                    j=i;
                    isRepeated=0;
                }
        }
    }
}
