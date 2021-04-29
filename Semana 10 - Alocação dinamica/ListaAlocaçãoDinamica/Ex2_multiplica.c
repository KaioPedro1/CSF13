#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * criaVetor(int tam);
void print2Array(int *array, int size1, int *array2, int size2);
int * multiplyArray(int *array, int *array2, int multsize, int sizeSecondArray, int sizeFirstArray);
void printArray(int *array, int size);
int main(){
    int size1,size2,//PARA TESTAR
        *firstArray, *secondArray, *multArray;
        srand(time(NULL));

        printf("Digte o tamanho do primeiro vetor: ");
        scanf("%d", &size1);
        printf("Digte o tamanho do segundo vetor: ");
        scanf("%d", &size2);
        firstArray = criaVetor(size1);
        secondArray = criaVetor(size2);
        print2Array(firstArray, size1, secondArray, size2);
        multArray = multiplyArray(firstArray,secondArray,(size1*size2), size2, size1);
        printArray(multArray,size1*size2);
        free(multArray);
        free(firstArray);
        free(secondArray);
}
int * criaVetor(int tam){
    int i, *internal;
    internal=(int*) malloc (tam*sizeof(int));
    for(i=0;i<tam;i++){
        internal[i]=rand()%11;
    }
    return (internal);
}
int * multiplyArray(int *array, int *array2, int multsize, int sizeSecondArray, int sizeFirstArray){
        int i,j, *internal, aux=0; //aux é o indice do vetor mult
        internal=(int*) malloc (multsize*sizeof(int));
        for(i=0;i<sizeFirstArray;i++){
            for(j=0;j<sizeSecondArray;j++){
                internal[aux]= *(array+i) * *(array2+j);
                aux++;
            }
        }
        return(internal);
}
void print2Array(int *array, int size1, int *array2, int size2){
    int i;
    for(i=0;i<size1;i++){
        printf("Primeiro vetor[%d] = %d\n",i, *(array+i));
    }
     for(i=0;i<size2;i++){
        printf("Segundo vetor[%d] = %d\n",i, *(array2+i));
    }
}
void printArray(int *array, int size){
    int i;
    for(i=0;i<size;i++){
        printf("\tVetor multiplicacao[%d] = %d\n",i, *(array+i));
    }
}