#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* fillRandom(int size);
void printSum(int *array1,int *array2, int size);
void printArray(int *array1, int size);

int main(){
    int *array1, *array2, size; 
    srand(time(NULL));
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &size);
    array1=fillRandom(size);
    printf("\t\tPrimeiro vetor\n");
    printArray(array1, size);
    array2=fillRandom(size);
    printf("\t\tSegundo vetor\n");
    printArray(array2, size);
    printSum(array1,array2, size);
    free(array1);
    free(array2);
}

int* fillRandom(int size){
    int i,*array1;
    array1=(int*) malloc (sizeof(int)*size);
    for(i=0; i<size; i++){
        array1[i]=rand()%100; 
    }
    return array1;
}
void printSum(int *array1,int *array2, int size){
    int i, j=size-1;
    printf("\t\t\tSoma dos vetores\n");
    for(i=0; i<size; i++,j--)
        printf("\t\t\t%d + %d = %d\n", array1[i], array2[j],array1[i]+array2[j]);
}
void printArray(int *array1, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Vetor[%d] = %d\n", i, array1[i]);
    }
}