/*4. Fa¸ca os seguintes itens:
(a) Escreva um programa que lˆe dois inteiros positivos m e n e calcula o m´ınimo m´ultiplo comum entre m e n. Para
isso, escreve primeiro uma fun¸c˜ao com prot´otipo:
int divide(int *m, int *n, int d)
que recebe trˆes inteiros positivos como parˆametros e retorna 1 se d divide pelo menos um entre *m e *n, 0 caso
contr´ario. Fora isso, se d divide *m, divide *m por d, e o mesmo para *n.

(b) Escreva uma funcao de cabecalho
int mmc (int m, int n)
que recebe como parametros dois inteiros positivos m e n e retorna, usando a fun¸c˜ao acima, o m´ınimo m´ultiplo
comum entre m e n, ou seja, mmc(m,n).
(c) Escreva um programa que lˆe n inteiros positivos e calcula, usando a fun¸c˜ao acima, o m´ınimo m´ultiplo comum
entre todos eles*/
#include <stdio.h>
int divide(int *m, int *n, int d);
int mmc(int m, int n);
int main(){
int firstn, secondn,i,qtd,total;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &qtd);
    scanf("%d", &firstn);
    scanf("%d", &secondn);
    total=mmc(firstn, secondn);
    for(i=0;i<(qtd-2);i++){
        scanf("%d", &firstn);
        total=mmc(total,firstn);
    }
    printf("%d\n", total);
}
int divide(int *m, int *n, int d){
    if(*m%d==0  || *n%d==0){
        if(*m%d==0)
            *m=*m/d;
        if(*n%d==0)   
            *n=*n/d;        
        return 1;
        }
    else
        return 0;
}
int mmc(int m, int n){
    int d=2, total=1;
    while(m!=1 || n!=1){
        while(divide(&m,&n,d)==1){
            total*= d;
            }
            d++;
    }
    return total;
}