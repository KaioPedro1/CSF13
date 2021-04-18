#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stringSize 10
#define answersSize 5
                                                            //A=1,B=2,C=3,D=4

void criaMatriz(int matrix[answersSize][stringSize], int string[stringSize]);
void printAnswers(int matrix[answersSize][stringSize]);
void studentScore(int matrix[answersSize][stringSize], int string[stringSize],int result[stringSize]);
int main(){
    int correctAnswers[stringSize], studentAnswers[answersSize][stringSize], i, result[stringSize];
    srand(time(NULL));
    criaMatriz(studentAnswers, correctAnswers); 
    printAnswers(studentAnswers);
    studentScore(studentAnswers,correctAnswers, result);
    for(i=0;i<stringSize;i++)
        printf("\tGabarito questao %d : %d\n", i+1,correctAnswers[i]);
        printf("\n");
    for(i=0;i<stringSize;i++)
        printf("\t\tPontuacao aluno %d = %d acerto(s)\n", i+1, result[i]);
}
void criaMatriz(int matrix[answersSize][stringSize], int string[stringSize]){
    int i, j;
    for(i=0;i<answersSize;i++){
        for(j=0;j<stringSize;j++){
            matrix[i][j]=rand()%5;
            if(i==0)
                string[j]=rand()%5;
        }
    }
}

void printAnswers(int matrix[answersSize][stringSize]){
    int i,j;
    printf("\n");
    for(i=0;i<answersSize;i++){
            printf("Aluno %d respondeu : ", i+1);
        for(j=0;j<stringSize;j++){
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void studentScore(int matrix[answersSize][stringSize] , int string[stringSize], int result[stringSize]){
    int i,j, sumScore=0;
    for(i=0;i<stringSize;i++){
        for(j=0;j<answersSize;j++){
            if(matrix[i][j]==string[j]){
                sumScore++;
            }
        }   
            result[i]=sumScore;
            sumScore=0;
    }
}