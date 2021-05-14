#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "cabecalhof.h"
#include "MENU.c"


int main(){
    Tab tabuleiro;
    tabuleiro.nL = 30,tabuleiro.nC = 80;//NÃO SEI SE MUDSOS PRO USURIO ENTRAR COM O TAMANHO
   /* printf("Informe a qtd de linhas: ");
    scanf("%d", &tabuleiro.nL);
    printf("Informe a qtd de colunas: ");
    scanf("%d", &tabuleiro.nC);*/
    do{
        menuInicJogo(&tabuleiro);

        jogaJogoVida(&tabuleiro);

        desalocaMatriz(&tabuleiro);

    }while(exitMenu() != 1);

    printf("\n");

    return 0;
}



void jogaJogoVida(Tab *mainTable){
    int i;

    Tab auxTable;
    auxTable.nL = mainTable->nL, auxTable.nC=mainTable->nC;

    auxTable.m = alocaMatriz(mainTable->nL,mainTable->nC);

    imprimeMatriz(mainTable);

    Sleep(500);

    for(i = 0; i < (mainTable->ciclosVida); i++)
    {
        preencheNovo(mainTable,&auxTable);

        system("cls");

        imprimeMatriz(&auxTable);

        Sleep(500);

        copiaMatriz(&auxTable, mainTable);
    }
    desalocaMatriz(&auxTable);
}

