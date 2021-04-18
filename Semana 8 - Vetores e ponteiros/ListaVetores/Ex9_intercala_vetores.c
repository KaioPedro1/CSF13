/*9. Fa¸ca uma fun¸c˜ao que receba como parˆametros de entrada dois vetores de inteiros (e sua dimens˜ao) e preencha um
terceiro vetor de tal forma que este possua nas posi¸c˜oes de ´ındice par os valores do primeiro e nas posi¸c˜oes de ´ındice
´ımpar os valores do segundo vetor (em outras palavras: intercalar os dois vetores iniciais. Obs - Todos os elementos
dos vetores originais devem estar presentes no vetor intercalado). Prot´otipo: void intercalaVetores(int v1[], int v2[], int v3[], int n);
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int v2[],int n, int limite);
void intercalaVetores(int v[], int v2[], int v3[], int n);

int main(){
    int string[100],string2[100],string3[100], number, limit;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(string,string2,number, limit);
    intercalaVetores(string, string2, string3, number);
}

void preencheVetor(int v[],int v2[],int n, int limite){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i]=rand()%limite;
        v2[i]=rand()%limite;
           printf("Vetor 1: %d\n", v[i]);     
           printf("Vetor 2: %d\n", v2[i]);               
    }
}
void intercalaVetores(int v1[], int v2[], int v3[], int n){
    int i,j=1;
        for(i=0;i<(n*2);i++){
            if(i%2==0){
                v3[i]=v1[i/2];
                    printf("\t\t\tVetor 3 indice %d valor %d\n", i, v3[i]);
            }
            else{
                v3[i]=v2[i-j];
                printf("\t\t\tVetor 3 indice %d valor %d\n", i, v3[i]);
                j++;
            }
        }







}