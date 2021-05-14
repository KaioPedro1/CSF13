

void limpaMatriz(Tab *tab){
    int i, j;
    for(i = 0; i < (tab->nL); i++)
    {
        for(j = 0; j < (tab->nC); j++)
        {
            tab->m[i][j]=VAZ;
        }
    }
}

char **alocaMatriz(int nL,int nC){
    int i;
    char **matrix;
    matrix = (char**)malloc(nL*sizeof(char*));
    for(i = 0; i < nL; i++)
    {
        matrix[i] = (char*)malloc(nC*sizeof(char));
    }
    return matrix;
}

void desalocaMatriz(Tab* tab){
    int i;
    for(i = 0; i < tab->nL ; i++)
    {
        free(tab->m[i]);
    }
    free(tab->m);
}

void  imprimeMatriz(Tab *tab){
    int i, j;
    for(i = 0; i < (tab->nL); i++)
    {
        for(j = 0; j < (tab->nC); j++)
        {
           printf("%c",tab->m[i][j]);
        }
        printf("\n");
    }
}

void copiaMatriz(Tab *mainTab, Tab *copy){
    int i, j;
    for(i = 0; i < (mainTab->nL); i++)
    {
        for(j = 0; j < (mainTab->nC); j++)
        {
            copy->m[i][j] = mainTab->m[i][j];
        }
    }
}

int insideMatrix(char**m, int nRow, int nCollumn, int nL, int nC){//função que conta a quantidade de vizinhos
    int count = 0, i, j, flag = 0;
    for(i = nRow-1; i <= nRow+1; i++) //checa linha
    {
        if(i < 0)
        {
            i++;
        }
         if (i > nL-1) //fora do tabuleiro?
        {
            flag=1;
        }
        for(j = nCollumn-1; j <= nCollumn+1 && flag!=1; j++) //checa coluna
        {
            if(j < 0)
            {
                j++;
            }
            if(j > nC-1) //fora do tabuleiro?
            {
                flag=1;
            }
            if(m[i][j] == ORG&&flag==0)
            {
                count++;
            }
            flag=0;
        }
    }
    if(m[nRow][nCollumn] == ORG && count > 0) //Verifica o numero do centro
    {
        count--;
    }
    return (count);
}

void preencheNovo(Tab *mainTab, Tab *auxTab){
    int i, j;
    for(i = 0; i < (mainTab->nL); i++)
    {
        for(j = 0; j < (mainTab->nC); j++)
        {
            auxTab->m[i][j] = converteQtd(insideMatrix(mainTab->m , i ,j, mainTab->nL, mainTab->nC), mainTab->m[i][j]);
        }
    }
}

char converteQtd(int n, char t){
    switch (t){
        case VAZ:
            if(n == 3) //Uma célula morta ganha vida se tiver exatamente tres vizinhas vivas.
            {
                return (ORG);
            }
            else
            {
                return (VAZ);
                break;
            }
        case ORG:
            if(n == 3 || n == 2) //Uma celula viva sobrevive se tiver duas ou tres vizinhas vivas.
            {
                return (ORG);
            }
            else //Uma celula viva morre de solid˜ao se tiver menos de duas vizinhas vivas ou morre por superpopulac˜ao se tiver mais que tres vizinhas vivas.
            {
                return (VAZ);
                break;
            }
        default:
            return('e');
            break;
    }
}
