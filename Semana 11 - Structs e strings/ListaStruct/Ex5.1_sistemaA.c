#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TOTAL 5
typedef struct{
int mat; /* matricula do funcionario */
char nome; /* inicial do nome do funcionario */
int sup; /* matricula do superior imediato */
}Funcionario;

int indice_funcionario(Funcionario* vet, int n, int mat);
int main(){
    srand(time(NULL));
    int i, n=MAX_TOTAL , mat;
    Funcionario file[MAX_TOTAL], *pointer;
    pointer = &file;
    for(i=0;i<MAX_TOTAL;i++){
        file[i].mat=rand()%10; //gera aleatório de 1 a 9 para testar a função 
        printf("Teste : %d\n",file[i].mat);// testar a função
    }
    printf("Informe o numero da matricula que deseja buscar: ");
    scanf("%d", &mat);
    if(indice_funcionario(pointer, n, mat)==-1)
        printf("Nao foi possivel encontra a matricula\n");
            else
                printf("Indice: [%d]\n", indice_funcionario(pointer, n, mat));
}
int indice_funcionario(Funcionario* vet, int n, int mat){
    int i;
    for(i=0; i<n; i++){
        if((vet+i)->mat==mat){
            return (i);
        }
    }
    return (-1);
}