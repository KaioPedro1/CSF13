#include <stdio.h>
#include <stdlib.h>
#define TOTAL_PERSON 3
#define MAXSTRING 50
typedef struct{
    char name[MAXSTRING]; 
    int day;
    int mounth;
}Anniversary;

int main(){
    Anniversary input[TOTAL_PERSON];
    int i;
    for(i=0;i<TOTAL_PERSON;i++){
        printf("Informe o seu nome: ");
        scanf("%s",input[i].name);
        printf("Informe o dia e o mes do seu aniversario(separados por espaco): ");
        scanf("%d %d",&input[i].day,&input[i].mounth); 
        printf("***************************************************************************\n");
    }
    for(i=0;i<TOTAL_PERSON;i++){
        printf("Pessoa [%d]\n Nome: %s \n\t Dia do aniversario %d, mes %d\n",i, input[i].name,input[i].day,input[i].mounth);
    }
}