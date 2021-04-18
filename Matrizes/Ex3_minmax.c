#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
void fillMatrix (int matrix[size][size]);
void printMatrix (int matrix[size][size], int row, int column,int n);
void biggestRow(int matrix[size][size],int row,int column, int*n);//ACHA A LINHA QUE TEM O MAIOR NUMERO
int main(){
    int matrix[size][size];
    srand(time(NULL)); 
    int i,j,bNumber=0;
  fillMatrix(matrix);
  biggestRow(matrix, size, size, &bNumber);
  printMatrix(matrix, size, size, bNumber); 
}
void fillMatrix(int matrix[size][size]){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            matrix[i][j]=rand()%101;
    }
}
void printMatrix (int matrix[size][size],int row, int column, int n){
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
void biggestRow(int matrix[size][size],int row, int column, int *n){
    int i,j,na=0;
    //ACHA A LINHA DO MAIOR ELEMENTO
    for (i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(matrix[i][j]>na){
                na=matrix[i][j];
                *n=i;
            }
        }
    }
}    