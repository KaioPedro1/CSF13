#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void removePosition(int *input, int remove, int size);
int *allocateAndFill(int size);

int main(){
    int *array,i, remove, sizeArray;
    srand(time(NULL));
    printf("Informe o tamanho do Vetor: ");
    scanf("%d", &sizeArray);
    array=allocateAndFill(sizeArray);
        printf("\nInforme a posicao que deseja remover de 0 a %d: ", sizeArray-1);
        scanf("%d", &remove);
        if(remove>=sizeArray){
            printf("Numero de posicoes invalida!");
            return 0;
        }
        removePosition(array, remove,sizeArray);  
     free(array);     
}
int *allocateAndFill (int size){
    int i, *insideArray;
    insideArray=(int*)malloc(sizeof(int)*size);
        for(i=0; i<size; i++){
            insideArray[i]=rand()%100;
            printf("Vetor original: %d\n", insideArray[i]);
    }
    return (insideArray);   
}


void removePosition(int *input, int remove,int size){
    int i;
            while(remove<size-1){
                input[remove]=input[remove+1];
                remove++;
       }
        for(i=0; i<size-1; i++){
            printf("\tVetor final: %d\n", input[i]);
    }
}