#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TOTAL_REGISTER 15
#define RANDOM_PHONE_MAX 14
typedef struct{
    int code;
    char *phone;
    float price;
}Register;   
void fillRandomRegister(Register *aux);
void generateRandomString(char randS[]);
void belowAverage(Register aux[], double avrg);

int main(){
    srand(time(NULL));
    int i; double average=0;
    char randomString[RANDOM_PHONE_MAX]="(41)999";//7posiçoes fixas na string
   Register totalElement[TOTAL_REGISTER];
    for(i=0;i<TOTAL_REGISTER;i++){
        generateRandomString(randomString);
        fillRandomRegister(&totalElement[i]);
        strcpy(totalElement[i].phone, randomString);//FIQUEI 1 HORA AQUI PQ TAVA TANTENDO PASSAR ASSIM:"totalElement[i].phone=randomString"
        printf("Loja[%d]\n\tCodigo: %d\tTelefone: %s\t Preco: R$%.2f\n", i+1,totalElement[i].code,totalElement[i].phone,totalElement[i].price);
        average+=totalElement[i].price;
    }
    printf("\n\n\t\t\tMedia dos precos R$:%.3lf\n\n", average/TOTAL_REGISTER);
    belowAverage(totalElement, average/TOTAL_REGISTER);
}



void fillRandomRegister(Register *aux){
    
    aux->code=1000+rand()%100000;
    aux->phone=(char*)malloc(15*(sizeof(char)));//15 é o tamanho da string
    aux->price=(float)rand()/RAND_MAX*1001;//pra criar float aleatorio
}

void generateRandomString(char randS[]){
    int i,asciiNumber;
    char aux;
    for(i=7;i<(RANDOM_PHONE_MAX-1);i++){//como 7 são fixas começa em 7 aqui
    asciiNumber=rand()%(57+1-48)+48;//pesquisei no google formula pra limitar em cima o rand e por baixo
    aux=asciiNumber;
    randS[i]=aux; 
    }
}
void belowAverage(Register aux[], double avrg){
    int i;
    printf("\t\t\tRELACAO DE TELEFONES DAS LOJAS QUE ESTAO ABAIXO DA MEDIA\n\n");
    for(i=0;i<TOTAL_REGISTER;i++){
        if(aux[i].price<=avrg){
            printf("Telefone: %s\t\tPreco R$:%.2f\n", aux[i].phone, aux[i].price);
        }
    }
}