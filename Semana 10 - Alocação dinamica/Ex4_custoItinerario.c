#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float custo_cidades (int* cidades, int n_cidades, int** m);
int** alocaMatriz (int row, int column);
int* alocaVetor (int size);
void fillMatrix(int **matric, int row, int column);
void fillArray(int *array, int size, int limit);
void freeMatrix(int **matrix,int n);
void printMatrix(int **m, int n,int b);
void printArray(int *a, int s);


int main(){
int matriceSize,itinerarySize,*itinerary, **matrixCost, i;
    srand(time(NULL));
    printf("\t\tInforme o tamanho da matriz: ");    
    scanf("%d", &matriceSize);
    matrixCost=alocaMatriz(matriceSize,matriceSize); 
    fillMatrix(matrixCost, matriceSize, matriceSize);    
  //  printMatrix(matrixCost,matriceSize,matriceSize); /*deixei os print pra testar
    do{
    printf("\t\tInforme o total de cidades visitadas: ");   
    scanf("%d", &itinerarySize);
    }while(itinerarySize<2); //TEM QUE SER MAIOR QUE 2
    itinerary = alocaVetor(itinerarySize);
    fillArray(itinerary, itinerarySize, matriceSize-1);
   // printArray(itinerary, itinerarySize); /*teste
    printf("\nCusto total: %.2fR$\n",custo_cidades(itinerary, itinerarySize, matrixCost));
   freeMatrix(matrixCost,matriceSize);
}
int **alocaMatriz (int row, int column){
    int **insideMatrice=(int**)malloc(row*sizeof(int*)),
    i,j;
    for(i=0;i<row;i++)
        insideMatrice[i]=(int*)malloc(column*sizeof(int));
    return insideMatrice;   
}
int* alocaVetor(int size){
    int *insideArray, i;
    insideArray=(int*)malloc(size*sizeof(int));
    return (insideArray);
}
float custo_cidades (int* cidades, int n_cidades, int** m){
    int i,t,j,totalCost=0;
    for(i=0;i<n_cidades-1;i++){
        totalCost+= m[cidades[i]][cidades[i+1]];
    }
    return(totalCost);
}
void freeMatrix(int **matrix,int n){
    int i;
    for(i=0;i<n;i++){
        free(matrix[i]);
    }
    free(matrix);
}
void printMatrix(int **m, int n,int b){
    int i,j;
     for(i=0;i<n;i++){
        for(j=0;j<b;j++){
        printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}
void printArray(int *array, int s){
    int i;
    printf("ORDEM DE VISITA\n");
    for(i=0;i<s;i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}
void fillMatrix(int **matric, int row, int column){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Informe o valor do custo, Matriz:[%d][%d]= ", i,j);
            scanf("%d", &matric[i][j]);
        }
    }
}
void fillArray(int *array, int size, int limit){
    int i;
    for(i=0;i<size;i++){
       do{ 
           printf("Itinerario[%d]= ", i);
           scanf("%d", &array[i]);      
       }
        while (array[i]<0||array[i]>limit);
    }
}