/*7. Fa¸ca uma fun¸c˜ao que, dados como entrada um vetor e a sua dimens˜ao, retorne a m´edia dos elementos pares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int n, int limite);
int averagePair(int array[], int n);

int main(){
    int string [100];
    int number, limit;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    preencheVetor(string, number, limit);
    averagePair(string, number);
}

void preencheVetor(int v[],int n, int limite){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i]=rand()%limite;
           printf("Vetor: %d\n", v[i]);          
    }
}
int averagePair(int array[], int n){
    int i, numerator=0, denominator=0;
    float average;
    for(i=0; i<n;i++){
        if(array[i]%2==0&&array[i]!=0){
            numerator=numerator+array[i];
            denominator++;
        } 
        }
        if(denominator==0)
            printf("\t\t\tVetor não possui números pares.");
        else
            average=(float)numerator/denominator;
            printf("\t\t\tMedia dos numeros pares: %.2f\n", average);
}