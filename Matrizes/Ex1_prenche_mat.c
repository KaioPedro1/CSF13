
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5
void fillMatrix (int matrix[size][size]);
void printMatrix (int matrix[size][size], int row, int column);
int main(){
    int matrix[size][size];
    srand(time(NULL)); 
    int i,j;
  fillMatrix(matrix);
  printMatrix(matrix, size, size); 
}
void fillMatrix(int matrix[size][size]){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            matrix[i][j]=rand()%11;
    }
}
void printMatrix (int matrix[size][size],int row, int column){
    int i,j;
   printf("\tMATRIZ NORMAL\t\t\t\n");
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\tMATRIZ TRANSPOSTA\t\t\t\n");
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}
