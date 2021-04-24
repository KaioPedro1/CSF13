#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int **v,int n, int limite);
void directOrder(int *v,int n);
void reverseOrder(int *v,int n);
int main(){
    int *array, number, limit;
    srand(time(NULL));
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(&array, number, limit);
    directOrder(array, number);
    reverseOrder(array, number);
    free(array);
}

void preencheVetor(int **v,int n, int limite){
    int i;
    *v=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        (*v)[i]=rand()%limite;       
    }
}
void directOrder(int *v,int n){
    int i;
    printf("\t\tVETOR EM ORDEM DIRETA\n");
    for(i=0;i<n;i++)
        printf("%d\n",v[i]);
}
void reverseOrder(int *v,int n){
        printf("\t\tVETOR EM ORDEM INVERSA\n");
        while(n>0){
        printf("%d\n",v[n-1]);
        n--;
        }
}

