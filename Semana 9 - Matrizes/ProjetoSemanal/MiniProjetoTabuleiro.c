#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 6
void fillMatrix(int matrix[size][size]);
void printMatrix(int matrix[size][size], int row, int column);
int main(){ 
    int i;
    int matrix[size][size];
    srand(time(NULL));
    for(i=0;i<size;i++){
        matrix[i][0]=rand()%2;
        matrix[0][i]=rand()%2;
    }
    fillMatrix(matrix);
    printMatrix(matrix, size, size);
}

void fillMatrix(int matrix[size][size]){
    int i,j;
    for(i=1;i<size;i++){//começa em 1 pq a primeira linha e coluna foi inicializada na função main
        for(j=1;j<size;j++)
            if(matrix[i][j-1]+matrix[i-1][j-1]+matrix[i-1][j]>=2){
                matrix[i][j]=0;
            }
            else 
                matrix[i][j]=1;
    }
}
void printMatrix (int matrix[size][size],int row, int column){
    int i,j;
   printf("\tTABULEIRO\t\t\t\n");
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
