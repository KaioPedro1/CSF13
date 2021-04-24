/*6. Fa¸ca duas fun¸c˜oes: uma que imprima o conte´udo de um vetor em ordem direta (do primeiro ao ´ultimo elemento) e
outra que imprima em ordem inversa (do ´ultimo elemento at´e o primeiro).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int n, int limite);
void directOrder(int v[],int n);
void reverseOrder(int v[],int n);
int main(){
    int array[100], number, limit;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(array, number, limit);
    directOrder(array, number);
    reverseOrder(array, number);
}

void preencheVetor(int v[],int n, int limite){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i]=rand()%limite;       
    }
}
void directOrder(int v[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("Posicao direta %d, valor %d\n",i, v[i]);
}
void reverseOrder(int v[],int n){
        while(n>0){
        printf("Posicao inversa %d, valor %d\n",n-1, v[n-1]);
        n--;
        }
}

