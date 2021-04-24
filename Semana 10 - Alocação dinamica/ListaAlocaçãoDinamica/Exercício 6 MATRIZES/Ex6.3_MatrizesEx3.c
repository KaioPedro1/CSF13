#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** allocateMatrix (int row, int column);
void desallocateMatrix(int **m1, int row);
void fillMatrix (int **matrix, int size);
void printMatrix (int **matrix, int row, int column,int n);
void biggestRow(int **matrix,int row, int column, int*n);//ACHA A LINHA QUE TEM O MAIOR NUMERO
int main(){
    int **matrix,bNumber=0,size;
    srand(time(NULL));
    printf("Digite a dimensao da matriz(ela eh quadrada): ");
    scanf("%d", &size);
    matrix=allocateMatrix(size,size);
    fillMatrix(matrix, size);
    biggestRow(matrix, size, size, &bNumber);
    printMatrix(matrix, size, size, bNumber);
    desallocateMatrix(matrix, size);
}

int** allocateMatrix(int row, int column){
    int i, **insideMatrix;
    insideMatrix=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
        insideMatrix[i]=(int*)malloc(column*sizeof(int));
    return (insideMatrix);
}
void fillMatrix(int **matrix, int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            matrix[i][j]=rand()%101;
    }
}

void printMatrix (int **matrix,int row, int column, int n){
    int i,j, smallNumber;
   printf("\tMATRIZ NORMAL\t\t\t\n");
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
           printf("%d\t", matrix[i][j]);
             }
        printf("\n");
        }
        //PRINTA O minimax
    for(i=0;i<column;i++){
        if(matrix[n][i]<smallNumber)
            smallNumber=matrix[n][i];
        }
        printf("\nO numero minimax eh %d\n", smallNumber);
    }
void biggestRow(int **matrix,int row, int column, int *n){
    int i,j,aux=0;
    //ACHA A LINHA DO MAIOR ELEMENTO
    for (i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(matrix[i][j]>aux){
                aux=matrix[i][j];
                *n=i;
            }
        }
    }
} 
void desallocateMatrix(int **m1, int row){
    int i;
     for(i=0; i<row; i++)
    free(m1[i]);
    free(m1);
}   