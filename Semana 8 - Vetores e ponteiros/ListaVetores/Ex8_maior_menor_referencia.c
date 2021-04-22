/*8. Modifique a fun¸c˜ao do item anterior de forma que ela tamb´em retorne, por referˆencia, o maior e o menor elemento
do vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int n, int limite);
int averagePair(int array[], int n, int *b,int *s);

int main(){
    int array [100];
    int number, limit, bigger=0,smaler;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    smaler=limit;
    preencheVetor(array, number, limit);
    averagePair(array, number, &bigger, &smaler);
    printf("\t\tMaior numero eh: %d\n\t\t\t e menor eh :%d\n", bigger, smaler);
}

void preencheVetor(int v[],int n, int limite){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i]=rand()%limite;
           printf("Vetor: %d\n", v[i]);          
    }
}
int averagePair(int array[], int n, int *b,int *s){
    int i, numerator=0, denominator=0;
    float average;
    for(i=0; i<n;i++){
        if(array[i]%2==0&&array[i]!=0){
            numerator=numerator+array[i];
            denominator++;
        }
        if(array[i]>*b)
            *b=array[i];
            else if (array[i]<*s)
                *s=array[i];
    }
        if(denominator==0)
            printf("\t\t\tVetor não possui números pares.");
        else
            average=(float)numerator/denominator;
            printf("\tMedia dos numeros pares: %.2f\n", average);
      return 0;      
}