/*8. Modifique a fun¸c˜ao do item anterior de forma que ela tamb´em retorne, por referˆencia, o maior e o menor elemento
do vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[],int n, int limite);
int averagePair(int string[], int n, int *b,int *s);

int main(){
    int string [100];
    int number, limit, bigger=0,smaler;
    printf("Informe o numero de elementos do vetor e o limite(separados por espaco): ");
    scanf("%d" "%d", &number, &limit);
    smaler=limit;
    preencheVetor(string, number, limit);
    averagePair(string, number, &bigger, &smaler);
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
int averagePair(int string[], int n, int *b,int *s){
    int i, numerator=0, denominator=0;
    float average;
    for(i=0; i<n;i++){
        if(string[i]%2==0&&string[i]!=0){
            numerator=numerator+string[i];
            denominator++;
        }
        if(string[i]>*b)
            *b=string[i];
            else if (string[i]<*s)
                *s=string[i];
    }
        if(denominator==0)
            printf("\t\t\tVetor não possui números pares.");
        else
            average=(float)numerator/denominator;
            printf("\tMedia dos numeros pares: %.2f\n", average);
      return 0;      
}