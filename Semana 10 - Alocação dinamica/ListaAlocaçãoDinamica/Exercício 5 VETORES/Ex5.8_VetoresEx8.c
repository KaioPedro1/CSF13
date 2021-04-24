#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *prencheVetor(int n, int limite);//parametro
float averagePair(int *array, int n, int *biggest, int*smaler);
void printArray(int *array1, int size);

int main(){
    int *array,number, limit, biggest, smaler;
    float average;
    srand(time(NULL));
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    array=prencheVetor(number, limit);
    biggest=array[0];
    smaler=array[0];
    average=averagePair(array, number,&biggest,&smaler);
    printArray(array, number);
    printf("\tA media dos numeros pares eh = %.2f\n\tO maior numero eh = %d\n\tO menor numero eh = %d\n", average, biggest, smaler);
    free(array);
}

int *prencheVetor(int n, int limite){
    int i, *insideArray;
    insideArray=(int*)malloc(sizeof(int)*n);
        for(i=0; i<n; i++){
        insideArray[i]=rand()%limite;     
        }
        return (insideArray);
}
float averagePair(int *array, int n, int *biggest, int *smaler){
    int i, numerator=0, denominator=0;
    float average;
    for(i=0; i<n;i++){
        if(array[i]%2==0&&array[i]!=0){
            numerator=numerator+array[i];
            denominator++;
            if(array[i]>*biggest)       
                *biggest=array[i];
                else if(array[i]<(*smaler))
                    *smaler=array[i];    
        } 
        }
        if(denominator==0)
            printf("\t\t\tVetor nao possui numeros pares.\n");
        else
            average=(float)numerator/denominator;
            return (average);
}
void printArray(int *array1, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Vetor[%d] = %d\n", i, array1[i]);
    }
}
