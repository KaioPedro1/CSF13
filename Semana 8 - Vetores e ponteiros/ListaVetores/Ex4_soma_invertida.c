/*4. Escreva um programa que gere dois vetores contendo N n´umeros inteiros aleat´orios cada um. Ap´os a gera¸c˜ao dos vetores,
o programa deve imprimir a soma dos elementos dos vetores da seguinte forma: o primeiro elemento do primeiro vetor
+ o ´ultimo elemento do segundo vetor, o segundo elemento do primeiro vetor + o pen´ultimo elemento do segundo
vetor, e assim por diante, at´e o ´ultimo elemento do primeiro vetor + o primeiro elemento do segundo vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void fillRandom(int array1[],int array2[]);
void printSum(int array1[],int array2[]);

int main(){
    int array1[N], array2[N];
    fillRandom(array1, array2);
    printSum(array1,array2);
}

void fillRandom(int array1[],int array2[]){
    int i;
     srand(time(NULL));
    for(i=0; i<N; i++){
        array1[i]=rand()%100;
         array2[i]=rand()%100;
            printf("Vetor 1 %d: %d\n", i, array1[i]);
             printf("Vetor 2 %d: %d\n",i,  array2[i]);
    }
}
void printSum(int array1[],int array2[]){
    int i, j=N-1;
    for(i=0; i<N; i++,j--)
        printf("\t\t\t%d + %d = %d\n", array1[i], array2[j],array1[i]+array2[j]);
}