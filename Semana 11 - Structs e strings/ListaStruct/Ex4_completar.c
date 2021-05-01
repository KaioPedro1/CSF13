#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_ALUNOS 10 //NÃO ENTENDI ISSO AQUI, EU QUE FALO A QTD DE ESTUDANTE? NÃO DA PRA ALOCAR DINAMICAMENTE?
typedef struct {
float p[3];
float M;
}Provas;

typedef struct {
int ra;
int frequencia;
Provas Ps;
}Aluno;

int main(void) {
int n,i,j;
float desvios_Ps[3]={0.0, 0.0, 0.0}, medias_Ps[3]={0.0, 0.0, 0.0};//media geral
Aluno vetAlunos[MAX_ALUNOS];
printf("Informe a quantidade total de estudantes: ");
scanf("%d", &n);  
for(i=0;i<n; i++){//PENSEI EM CRIAR UMA FUNÇÃO PRA RECEBER OS DADOS DO USUARIO E OUTRA PRA CALCULAR MEDIA E DESVIO
    printf("Digite o RA do aluno[%d]: ", i+1);
    scanf("%d", &vetAlunos[i].ra);
    vetAlunos[i].Ps.M=0;//inicializa como 0 pq se não inicializar pode somar o "lixo"
        for(j=0;j<3;j++){//3 É O NÚMERO DE PROVAS
            printf("Nota aluno [%d] prova [%d]= ", i, j);
            scanf("%f", &vetAlunos[i].Ps.p[j]);
            vetAlunos[i].Ps.M+=vetAlunos[i].Ps.p[j];
    }
            vetAlunos[i].Ps.M=vetAlunos[i].Ps.p[j]/3;//3 é o número de provas  
}

//ACHA MÉDIA DAS PROVAS, não fiz uma função pq o exercicio pede pra não criar novas variaveis
for(i=0;i<3;i++){
    for(j=0;j<n;j++){
    medias_Ps[i]+=vetAlunos[j].Ps.p[i];//medias_Ps já é inicializado em 0
    }
    medias_Ps[i]=medias_Ps[i]/n;
}
//ACHA O DESVIO PADRAO
for(i=0;i<3;i++){
    for(j=0;j<n;j++){
        desvios_Ps[i]+=pow((vetAlunos[j].Ps.p[i]-medias_Ps[i]), 2);
    }
     desvios_Ps[i]=sqrt(desvios_Ps[i]/n);
}
//printa a saida ra, prova e média alunos
for(i=0;i<n;i++){
    printf("\n");
    printf("RA: %d\n", vetAlunos[i].ra);
    for(j=0;j<3;j++){
        printf("Prova %d : %f\n", j, vetAlunos[i].Ps.p[j]);
    }
    printf("Media: %f\n", vetAlunos[i].Ps.M);
    printf("----------------------------------------------------------\n");
}

//printa média das provas e desvio padrão
for(i=0;i<3;i++){
    printf("Media geral da prova(%d): %f\n", i, medias_Ps[i]);
    printf("Desvio padrao da prova(%d): %f\n", i, desvios_Ps[i]);
}}

