/*9. Fa¸ca uma fun¸c˜ao que receba como parˆametros de entrada dois vetores de inteiros (e sua dimens˜ao) e preencha um
terceiro vetor de tal forma que este possua nas posi¸c˜oes de ´ındice par os valores do primeiro e nas posi¸c˜oes de ´ındice
´ımpar os valores do segundo vetor (em outras palavras: intercalar os dois vetores iniciais. Obs - Todos os elementos
dos vetores originais devem estar presentes no vetor intercalado). Prot´otipo: void intercalaVetores(int v1[], int v2[], int v3[], int n);
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int **v,int **v2,int n, int limite);
void intercalaVetores(int *v, int *v2, int **v3, int n);
void printArray(int *array1, int size);
int main(){
    int *array,*array2,*array3, number, limit; 
    srand(time(NULL));
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(&array,&array2,number, limit);   
    printf("\t\tPrimeiro VETOR\n");
    printArray(array, number);
    printf("\t\tSegundo VETOR\n");
    printArray(array2, number);
    printf("\t\tVETOR INTERCALADO\n");
    intercalaVetores(array, array2, &array3, number);
    printArray(array3, number*2);
}

void preencheVetor(int **v,int **v2,int n, int limite){
    int i;
    *v=(int*)malloc(sizeof(int)*n);
    *v2=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        (*v)[i]=rand()%limite;
        (*v2)[i]=rand()%limite;            
    }
}
void intercalaVetores(int *v1, int *v2, int **v3, int n){
    int i,j=1;
    *v3=(int*)malloc(sizeof(int)*(n*2));
        for(i=0;i<(n*2);i++){
            if(i%2==0)
                (*v3)[i]=v1[i/2];            
            else{
                (*v3)[i]=v2[i-j];
                j++;
            }
        }
}
void printArray(int *array1, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Vetor[%d] = %d\n", i, array1[i]);
    }
}