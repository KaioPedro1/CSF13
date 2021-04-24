#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void printArray(int *array, int size);
int * expandeVetor(int *v, int tam, int n, int lim);
int * criaVetor(int tam, int lim);
void criaVetorPorReferencia(int **v, int tam, int lim);
int main(){
    int size, limit, expansion, number;
    int * dArray, * expandedArray;
    srand(time(NULL));
    printf("Por favor, informe o tamanho e o limite do vetor(separados por espaco): ");
    scanf("%d %d", &size,&limit);
   //dArray=criaVetor(size,limit);                                      OPÇÃO1
    criaVetorPorReferencia(&dArray, size, limit);                       // opção 2
    printf("Deseja expandir of vetor? \n\t(0) Para NAO expandir o vetor\n\tOutro valor para sim.\n");
    scanf("%d", &number);
        if(number!=0){
            printf("Valor de expansao: ");
            scanf("%d", &expansion);
            expandedArray=expandeVetor(dArray,size,expansion,limit);
            printArray(expandedArray, (size+expansion));  
            free(expandedArray);
        }
        else{
            printArray(dArray,size);
            free(dArray);
        }

    return 0;
}
int *criaVetor(int tam, int lim){
    int i, *internalArray;
        internalArray=(int*) malloc (sizeof(int)*tam);
            for(i=0;i<tam;i++){
                internalArray[i]=rand()%lim;
            }
                return (internalArray);
}
void printArray(int *array, int size){
    int i;
    for(i=0;i<size;i++){
        printf("Vetor[%d] = %d\n",i, *(array+i));
    }
}/*ESTUDAR AQUI*/
int *expandeVetor(int *v, int tam, int n, int lim){
    int i, *arrayRe;
  
    arrayRe=(int *) realloc (v, (tam+n)*(sizeof(int)));
    for(i=tam;i<tam+n; i++){
        arrayRe[i]=rand()%lim;
    }  
    return (arrayRe);
}
void criaVetorPorReferencia(int **v, int tam, int lim){
    int i;
    *v = (int*) malloc ((sizeof(int))*tam);
    for(i=0;i<tam;i++){
        (*v)[i] = rand()%lim;
       } 
}
