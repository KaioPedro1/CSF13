#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 3
/*PROVAVELMMENTE TEM UMA MANEIRA MAIS "CLEAN" DE RESOLVER ESSE EXERCICIO*/
void printMatrix(int matrix[size][size]);
int magicQuad(int matrix[size][size]);

int main(){
    int matrix[size][size]={8,0,7,4,5,6,3,10,2};
    srand(time(NULL)); 
    printMatrix(matrix);
    magicQuad(matrix);
}
void printMatrix(int matrix[size][size]){
    int i,j;
    printf("\tMATRIZ NORMAL\t\t\t\n");
    for(i=0;i<size;i++){     
        for(j=0;j<size;j++){
           printf("%d\t", matrix[i][j]);
             }
            printf("\n");
}
}
int magicQuad(int matrix[size][size]){
    int i,j, sumRow=0,sumColumn=0,sumDiag1=0,sumDiag2=0, aux=size-1;
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                sumRow+=matrix[i][j];
                sumColumn+=matrix[j][i];
                    if(i==j)
                        sumDiag1+=matrix[i][j];
                        if(j==aux){
                            sumDiag2+=matrix[i][j];
                            aux--;
                        }    
            }
            if(sumRow!=sumColumn){
                printf("Nao eh quadrado perfeito magico\n");
                return 0;
            }
        }  
                if(sumRow/size==sumDiag1 && sumRow/size==sumDiag2)
                printf("Eh quadrado magico\n");               
                 else
                printf("Nao eh quadrado perfeito magico\n");
                
}