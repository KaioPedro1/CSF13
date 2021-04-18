#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

void fillMatrix (int matrix[size][size], int*pointer);
int duplicate (int matrix[size][size], int *pointer);
void imprimeMatriz (int matrix[size][size], int row, int column);

int main(){
    int card[size][size];
    srand(time(NULL));
    fillMatrix(card, &card);
    imprimeMatriz(card, size, size);
}

void fillMatrix (int matrix[size][size], int *pointer){
    int i, j;
   for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=rand()%100;
        }
    }   //ENQUANTO NAO FOREM TODOS DIFERENTES CONTINUA PRENCHENDO, PROVAVLEMTE TEM UMA MANEIRA MAIS ELEGANTE DE FAZER ISSO
       while(duplicate(matrix, pointer)!=1){
            fillMatrix(matrix, pointer);
        }

}
int duplicate (int matrix[size][size],int *pointer){
    int i, j=1;
     for(i=0;i<(size*size)-1;i++){//(total de elementos na matriz -1) pq não precisa testar o ultimo elemento
        for(j+=i;j<=(size*size);j++){// j+=i significa 1 elemento a frente, compara até o ultimo elemento
            if(*(pointer+i) == *(pointer+j)){//como os valores da matriz são armazenados em sequencia isso aqui funciona
               return 0;
            }
        }
               j=1;        //necessario, pq como a inicializacao do segundo loop é j+=i ele acumula  e só vai rodar 1 vez o segundo loop  
    }
    return 1;
}
void imprimeMatriz (int matrix[size][size],int row, int column){
     int i,j;
   printf("\tCartela de BINGO\t\t\t\n");
    for(i=0;i<row;i++){     
        for(j=0;j<column;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    } 
}