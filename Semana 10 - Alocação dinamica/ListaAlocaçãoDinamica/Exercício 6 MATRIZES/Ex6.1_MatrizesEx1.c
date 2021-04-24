#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** allocateMatrix (int row, int column);
void printMatrix (int **matrix, int row, int column);
void fillMatrix(int **matrix, int row, int column);
void desallocateMatrix(int **m1, int row);

int main(){
    int **matrix,row,column,i;
    srand(time(NULL));
    printf("Informe a dimensao da matriz(separados por espaco): ");
    scanf("%d %d", &row, &column);
    matrix=allocateMatrix(row,column);
    fillMatrix(matrix, row, column);
    printMatrix(matrix,row, column);
    desallocateMatrix(matrix, row);
}
int** allocateMatrix(int row, int column){
    int i, **insideMatrix;
    insideMatrix=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
        insideMatrix[i]=(int*)malloc(column*sizeof(int));
    return (insideMatrix);
}
void fillMatrix(int **matrix, int row, int column){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            matrix[i][j]=rand()%100;
        }
    }  
}
void printMatrix (int **matrix,int row, int column){
    int i,j;
   printf("\t\t\tMATRIZ %d X %d\n", row, column);
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }   
}
void desallocateMatrix(int **m1, int row){
    int i;
     for(i=0; i<row; i++)
    free(m1[i]);
    free(m1);
}

