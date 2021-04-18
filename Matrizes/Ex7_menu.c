#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 3

void options();
void fillMatrix(int matrix[size][size], int matrix2 [size][size]);
void printMatrix(int matrix[size][size]);
void sumMatrix(int matrix[size][size], int matrix2 [size][size], int summatrix[size][size]);
void subtractFirstandSecond(int matrix[size][size], int matrix2[size][size],int submatrix[size][size]);
void constMultMatrix(int matrix[size][size], int constant);

int main(){
    int number, firstMatrix[size][size], secondMatrix[size][size], existance=0, tempMatrix[size][size], constant;
    srand(time(NULL));
    do
    {
        options();
        printf("\n\nPor favor infore a opcao desejada: ");
        scanf("%d", &number);
        switch (number) {
            case 0:{
                fillMatrix(firstMatrix, secondMatrix);
                existance=1;
                break;
            }
            case 1:{
                if (existance==1){
                printf("\n\t\t\t\tMATRIZ 1 \t \n");
                printMatrix(firstMatrix);
                printf("\n\t\t\t\tMATRIZ 2 \t \n");
                printMatrix(secondMatrix);
                break;
                }
                else
                    printf("Matriz nao foi prenchida ainda, tente novamente");
                    break;
            }
            case 2:{
                sumMatrix(firstMatrix,secondMatrix,tempMatrix);
                printf("\n\t\t\t\tMATRIZ SOMA \t \n");
                printMatrix(tempMatrix);
                break;
            }
            case 3:{
                subtractFirstandSecond(firstMatrix,secondMatrix,tempMatrix);
                printf("\n\t\t\t\tMATRIZ DIFERENCA \t \n");
                printMatrix(tempMatrix);
                break;
            }
            case 4: {
                if(existance==1){
                printf("Informe a constante que deseja multiplicar: ");
                scanf("%d", &constant);
                constMultMatrix(firstMatrix, constant);
                printf("\n\t\tMatriz multiplicada por constante\n");
                printMatrix(firstMatrix);
                break;
                }
                else{
                    printf("Matriz nao foi prenchida ainda, tente novamente");
                    break;
                }
            }
        }
    } while (number<9&&number>=0);   
}

void options(){
    printf("\n\n\n");
    printf("\t(0) criar duas matrizes 10 x 10 com valores inteiros\n\t(1) imprimir as matrizes originais \n\t(2) somar as duas matrizes e imprimir o resultado\n");  
    printf("\t(3) subtrair a primeira matriz da segunda e imprimir o resultado\n\t(4) multiplicar uma constante a primeira matriz e imprimir o resultado\n");
    printf("\t(9) para sair\n");
}
void fillMatrix(int matrix[size][size], int matrix2[size][size]){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=rand()%20;
            matrix2[i][j]=rand()%20;
        }
    }
}
void printMatrix(int matrix[size][size]){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void sumMatrix(int matrix[size][size], int matrix2 [size][size], int summatrix[size][size]){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            summatrix[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }
}
void subtractFirstandSecond(int matrix[size][size], int matrix2[size][size],int submatrix[size][size]){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            submatrix[i][j]=matrix[i][j]-matrix2[i][j];
        }
    }
}
void constMultMatrix(int matrix[size][size], int constant){
    int i, j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=matrix[i][j]*constant;
        }
    }
}
