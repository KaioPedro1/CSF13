#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int **v,int n, int limite);
void printArray(int *array1, int size);

int main(){
    int *array, number, limit;
    srand(time(NULL));
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(&array, number, limit);
    printArray(array, number);
    free(array);
}

void preencheVetor(int **v,int n, int limite){
    int i;
    *v=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        (*v)[i]=rand()%limite;         
    }
}
void printArray(int *array1, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Vetor[%d] = %d\n", i, array1[i]);
    }
}