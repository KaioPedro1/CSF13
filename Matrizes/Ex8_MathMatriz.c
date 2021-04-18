#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 3

void fillMatrix(int matrix[size][size], int n);
void multMatrix(int matrix[size][size], int matrix2 [size][size],int matrix3 [size][size]);
void printMatrix(int matrix[size][size], int n);
int main(){
    /*se der tempo eu faço um menu, faltou matriz expoente*/
    int i=0, number;
    srand(time(NULL));
    int matrixA[size][size] , matrixB[size][size], matrixC[size][size];
    fillMatrix(matrixA,1);
    fillMatrix(matrixB,2);          
    printf("Matriz A vezes matriz B");
    multMatrix(matrixA,matrixB,matrixC);
    printMatrix(matrixC, 3);
    printf("Matriz ao quadrado");
    multMatrix(matrixA,matrixA,matrixC);
    printMatrix(matrixC, 4);


}

void fillMatrix(int matrix[size][size], int n){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=rand()%10;
       }
   }
   printMatrix(matrix, n);
}
void printMatrix(int matrix[size][size], int n){
    int i, j;
    printf("\t\t\tMATRIZ %d\n", n);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void multMatrix(int matrix[size][size], int matrix2 [size][size],int matrix3 [size][size]){
    int i, j,k, counter=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            for(k=0;k<size;k++){
                counter+=matrix[i][k]*matrix2[k][j];
                }
                matrix3[i][j]=counter;
                counter=0;
        }
    }
}