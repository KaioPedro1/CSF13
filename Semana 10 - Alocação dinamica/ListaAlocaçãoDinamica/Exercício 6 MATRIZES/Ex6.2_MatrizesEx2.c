#include <stdio.h>
#include <stdlib.h>


int** allocateMatrix (int row, int column);
void desallocateMatrix(int **m1, int row);
void pascalTriangle(int **m,int size);
int main(){
    int **matrix, row, column;
    printf("Por favor, informe o tamanho desejado do triangulo de pascal: ");
    scanf("%d", &row); 
    column=row;//matriz sempre vai ser quadrada, não precisa dessa variavel, criei pq acho que é bom costume
    matrix=allocateMatrix(row, column);
    pascalTriangle(matrix, row);
    desallocateMatrix(matrix, row);
}
void pascalTriangle(int **m,int size){
        int i,j;
        for(i=0;i<size;i++){
            for(j=0;j<=i;j++){
                if(j==0 || j==i){//PRENCHE AS EXTREMINADADES DO TRINANGULO COM VALOR 1
                    m[i][j]=1;
                    printf("%d\t", m[i][j]);    
                }
                else{
                    m[i][j]=m[i-1][j-1]+m[i-1][j];
                    printf("%d\t", m[i][j]);}
            }
            printf("\n");
        }
}
int** allocateMatrix(int row, int column){
    int i, **insideMatrix;
    insideMatrix=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
        insideMatrix[i]=(int*)malloc(column*sizeof(int));
    return (insideMatrix);
}
void desallocateMatrix(int **m1, int row){
    int i;
     for(i=0; i<row; i++)
    free(m1[i]);
    free(m1);
}







