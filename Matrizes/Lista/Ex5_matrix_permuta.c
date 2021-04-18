#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 3
void fillMatrix(int matrix[size][size]);
void printMatrix(int matrix[size][size], int row, int column);
int itsPermutation(int matrix[size][size]);
int main(){
    int matrix[size][size]={{1,0,0},{0,0,1},{0,1,0}};
    srand(time(NULL));
  //  fillMatrix(matrix);
    printMatrix(matrix, size, size);
    if(itsPermutation(matrix)==0)
        printf("Nao eh matriz permutacao\n");
        else
            printf("Eh matriz permutacao\n");
}

void fillMatrix(int matrix[size][size]){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            matrix[i][j]=rand()%2;
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
}
int itsPermutation(int matrix[size][size]){
    int i, j, sumOne=0, sumZero=0;
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                if(matrix[i][j]==1){
                    sumOne++;
                }
                else
                    sumZero++;
            }      
            if(sumOne>=2 || sumZero!=(size-1)){
                    return 0;
                }
                sumOne=0;
                sumZero=0;
        }
        return 1;
}