#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int *array, int size);
int noDuplicateArray(int **newArray, int *oldArray, int size);
int* fillRandomArray(int size, int limit);
int main(){
   int *firstArray, *finalArray, sizeOfArray,limit,totalDuplicate;
   srand(time(NULL));
    printf("Informe o tamanho do primeiro array e o limite(separados por espaco):");
    scanf("%d %d", &sizeOfArray, &limit);
    firstArray=fillRandomArray(sizeOfArray,limit);
    totalDuplicate=(int)noDuplicateArray(&finalArray, firstArray, sizeOfArray);//armazena o valor de retorno da função e já preenche o vetor finalArray
    printf("\t\tPrimeiro VETOR\n");
    printArray(firstArray, sizeOfArray);
    printf("\t\tVetor sem repeticao\n");
    printArray(finalArray, (sizeOfArray-totalDuplicate));//total de posições do vetor-o total de duplos
    free(firstArray);
    free(finalArray);

}
void printArray(int *array, int size){
    int i;
    for(i=0;i<size;i++){
        printf("Vetor[%d] = %d\n",i, *(array+i));
    }
}
int* fillRandomArray(int size, int limit){
    int *insideArray, i;
    insideArray=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        insideArray[i]=rand()%limit;
    }
    return(insideArray);
}
int noDuplicateArray(int **newArray, int *oldArray, int size){
    int i,
    flag=0,j,total_duplicate=0, new=1; //new é a posição do novo array
    *newArray=(int*) malloc (sizeof(int)*size);//alloco o tamanho total do vetor antigo
    (*newArray)[0]=oldArray[0];
    for(i=1;i<size;i++){
        for(j=0;j<i;j++){
            if(oldArray[i]==oldArray[j]){
                flag=1;
                break;}             
        }
        if(flag==0){
             (*newArray)[new]=oldArray[i];
               new++;            
        }
        else{
            total_duplicate++;
            flag=0;  
              
        }
    } 
    *newArray=realloc(*newArray, (size-total_duplicate)*(sizeof(int)));//reallocando o tamanho desnecessário, já que o ponteiro newArrey já está ordenado
    return (total_duplicate); 
}
