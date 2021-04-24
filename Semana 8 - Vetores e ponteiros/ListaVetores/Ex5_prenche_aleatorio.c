/*5. Fa¸ca uma fun¸c˜ao que preencha um vetor de N posi¸c˜oes com valores aleat´orios (o usu´ario deve fornecer tamb´em um
limite para os valores gerados). Aten¸c˜ao: use essa fun¸c˜ao para preencher vetores nos exerc´ıcios seguintes.
Prot´otipo: void preencheVetor(int v[], int n);*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int n, int limite);

int main(){
    int array[100], number, limit;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(array, number, limit);
}

void preencheVetor(int v[],int n, int limite){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i]=rand()%limite;
            printf("Vetor: %d\n", v[i]);          
    }
}