#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int **v,int n, int limite);//referencia
int *prencheVetor2(int n, int limite);//parametro
float averagePair(int *array, int n);
void printArray(int *array1, int size);

int main(){
    int *array,number, limit;
    float average;
    srand(time(NULL));
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    array=prencheVetor2(number, limit);
    printArray(array, number);
    printf("A media dos numeros pares eh = %.2f\n", averagePair(array, number));

}

void preencheVetor(int **v,int n, int limite){
    int i;
    *v=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        (*v)[i]=rand()%limite;     
    }
}
int *prencheVetor2(int n, int limite){
    int i, *insideArray;
    insideArray=(int*)malloc(sizeof(int)*n);
        for(i=0; i<n; i++){
        insideArray[i]=rand()%limite;     
        }
        return (insideArray);
}
float averagePair(int *array, int n){
    int i, numerator=0, denominator=0;
    float average;
    for(i=0; i<n;i++){
        if(array[i]%2==0&&array[i]!=0){
            numerator=numerator+array[i];
            denominator++;
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
