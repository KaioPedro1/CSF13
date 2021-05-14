#ifndef FUNCOESPJF_H_INCLUDED //Como criar arquivos de cabe�alho em linguagem C: https://www.youtube.com/watch?v=QWMmuZtcDIs
#define FUNCOESPJF_H_INCLUDED


#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 60 /*https://stackoverflow.com/questions/14539867/how-to-display-a-progress-indicator-in-pure-c-c-cout-printf*/
#define UPWARD 80  //(https://stackoverflow.com/questions/2876275/what-are-the-ascii-values-of-up-down-left-right)
#define DOWNWARD 72
#define RIGHT 77
#define LEFT 75
#define ENTER 13
#define ESC '\033'//https://stackoverflow.com/questions/10463201/getch-and-arrow-codes
#define ORG 'X'
#define VAZ ' '
#define TAM 101
#define BUFFER 1024

typedef struct {
    //char nomeJogo[TAM];
    int nL,nC;
    char **m;
    int ciclosVida;
}Tab;

//FUNCOES PARA O MENU
void arrowHere(int positionX, int positionY, int mainOrSub);
void ShowConsoleCursor(int showFlag);
void printProgress(char* name, Tab *tab);
int mainMenu();
int exitMenu();
void menuInicJogo(Tab *tab);
void opcoesInvasores(Tab *tab);


//FUNCOES QUE ENVOLVEM MATRIZES
char converteQtd(int n, char t);
void limpaMatriz(Tab *tab);
char **alocaMatriz(int nL,int nC);
void desalocaMatriz(Tab* tab);
void  imprimeMatriz(Tab *tab);
void copiaMatriz(Tab *mainTab, Tab *copy);
int insideMatrix(char**m, int nRow, int nCollumn, int nL, int nC);
void preencheNovo(Tab *mainTab, Tab *auxTab);
void preencheInvasora(Tab *original, Tab *invader);

//FUNCOES DE INICIALIZACAO DE MATRIZES

void inicBloco(Tab *tab);
void inicBloco2(Tab *tab);
void inicBlinker(Tab *tab);
void inicSapo(Tab *tab);
void inicGlider(Tab *tab);
void inicLWSS(Tab *tab);
void inicCSV(Tab *tab, char *filename);


//OUTRAS
void jogaJogoVida(Tab *mainTable);


#endif // FUNCOESPJF_H_INCLUDED
