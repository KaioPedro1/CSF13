#include "funcoesmatriz.c"


void inicBloco(Tab *tab)
{
    char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
    int i, j, xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            tab->m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}

void inicBloco2(Tab *tab)
{
    char padrao[3][3]={{VAZ,ORG,ORG},{ORG,ORG,VAZ},{VAZ,ORG,VAZ}};
    int i, j, xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            tab->m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}

void inicBlinker(Tab *tab)
{
    char padrao[1][3]={{ORG,ORG,ORG}};
    int i, j, xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

    for(i = 0; i < 1; i++)
    {
        for(j = 0; j < 3; j++)
        {
            tab->  m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}

void inicSapo(Tab *tab)
{
    char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
    int i, j, xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            tab->m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}

void inicGlider(Tab *tab)
{
    char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
    int i, j, xInic, yInic;

    limpaMatriz(tab);

    xInic=tab->nL-4;
    yInic=tab->nC-4;
    for(i=0;i<3;i++)
    {
        for(j = 0; j < 3; j++)
        {
            tab-> m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}
void inicLWSS(Tab *tab)
{
    char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
    int i, j, xInic, yInic;

    limpaMatriz(tab);

    xInic=tab->nL-5;
    yInic=tab->nC-6;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            tab->m[xInic+i][yInic+j]=padrao[i][j];
        }
    }
}

void inicCSV(Tab *tab, char *filename)
{
    FILE *arquivo;
    char string[BUFFER], *tokenRow, *tokenColumn, flag=0;
    arquivo=fopen(filename, "r");

    if (arquivo == NULL) //verifica se o arquivo foi inicializado corretamente
    {
        printf("Could not open file %s\n",filename);
    }

    limpaMatriz(tab);

    while(!feof(arquivo)) //confere o arquivo inteiro (feof = fim do arquivo)
    {
        fgets(string, BUFFER, arquivo);
        tokenRow = strtok(string,",");
        if(atoi(tokenRow)<0||atoi(tokenRow)>(tab->nL-1))//verifica se o número da linha É valido
        {
            flag = 1;
        }
        tokenColumn = strtok(NULL,",");
        while(tokenColumn != NULL && flag != 1)
        {
            if(atoi(tokenColumn) >= 0 && atoi(tokenColumn) <= (tab->nC-1))//verifica se o número da coluna é valido
            {
                tab->m[atoi(tokenRow)][atoi(tokenColumn)]='X';
                tokenColumn = strtok(NULL,",");
            }
            else
            {
                tokenColumn = strtok(NULL,",");
            }
        }
        flag = 0; //reseta flag
    }
    fclose(arquivo);
}

void preencheInvasora(Tab *original, Tab *invader)
{
    int i, j;
    for(i = 0; i < (original->nL); i++)
    {
        for(j = 0; j < (original->nC); j++)
        {
            if(invader->m[i][j] == ORG && original->m[i][j]  == ORG) //confere se sobrepoe
            {
                original->m[i][j] = VAZ;
            }
            else if (invader->m[i][j] == ORG || original->m[i][j]  == ORG)
            {
                original->m[i][j] = ORG;
            }
            else
                original->m[i][j] = VAZ;
        }
    }
}
/*30colunas minimo
void replicador(Tab *tab){
   char padrao[5][5]={{VAZ,VAZ,ORG,ORG,ORG},{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,ORG,VAZ},{ORG,ORG,ORG,VAZ,VAZ}};
    int i,j,xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

 for(i=0;i<5;i++)
    for(j=0;j<5;j++)
      tab->m[xInic+i][yInic+j]=padrao[i][j];
}*/

/* vidas eternas 2
char padrao[3][3]={{VAZ,ORG,VAZ},{ORG,VAZ,ORG},{VAZ,ORG,VAZ}};
    int i,j,xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tab->m[xInic+i][yInic+j]=padrao[i][j];
        }
    }*/
   /*
void Rpentomino(Tab *tab)
{
     char padrao[3][3]={{VAZ,ORG,ORG},{ORG,ORG,VAZ},{VAZ,ORG,VAZ}};
    int i,j,xInic=tab->nL/2, yInic=tab->nC/2;

    limpaMatriz(tab);

 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      tab->m[xInic+i][yInic+j]=padrao[i][j];
}*/
