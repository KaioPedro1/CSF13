#include "inicializadores.c"

int mainMenu()
{
    int position=1,flag=0, submenuY=1;
    int keyPressed=0;
    ShowConsoleCursor(0);
    while(keyPressed != RIGHT)
    {
        system("cls"); flag=0; //flag pra função arrowhere
        arrowHere(1,position, flag);printf("1. Vidas paradas\n");
        arrowHere(2,position, flag);printf("2. Osciladores\n");
        arrowHere(3,position, flag);printf("3. Naves espaciais\n");
        arrowHere(4,position, flag);printf("4. Outros\n");
        keyPressed = getch();
        fflush(stdin);
        fflush(stdout);
        if(keyPressed == UPWARD && position != 4)
        {
            position++;
        }
        else if(keyPressed == DOWNWARD && position != 1)
        {
            position--;
        }
        else if(keyPressed == RIGHT || keyPressed == ENTER) //direita ou enter abre o submenu
        {
            flag=1; //flag pra funçao da flecha
            if(position==1)submenuY=1; //pra função retornar um valor de 1 a 8.
            if(position==2)submenuY=3;
            if(position==3)submenuY=5;
            if(position==4)submenuY=7;
            while(keyPressed != LEFT && keyPressed != ESC)
            { // qnd pressionar seta esquerda volta p/loop anterior, existe uma condição de enter em baixo que retorna a função
                switch (position)
                {
                    case 1:
                            system("cls");
                            printf("1. Vidas paradas\n");
                            arrowHere(1,submenuY, flag);printf(" a) Vida eterna 1\n");
                            arrowHere(2,submenuY, flag);printf(" b) Vida eterna 2\n");
                            printf("2. Osciladores \n3. Naves espaciais\n4. Outros\n");
                            keyPressed = getch();
                            fflush(stdin);
                            if(keyPressed == UPWARD && submenuY != 2)
                            {
                                submenuY++;
                            }
                            else if (keyPressed == DOWNWARD && submenuY != 1)
                            {
                                submenuY--;
                            }
                            break;
                    case 2:
                            system("cls");
                            printf("1. Vidas paradas\n2. Osciladores\n");
                            arrowHere(3,submenuY,flag);printf(" a) Blinker\n");
                            arrowHere(4,submenuY,flag);printf(" b) Sapo\n");
                            printf("3. Naves espaciais\n4. Outros\n");
                            keyPressed = getch();
                            fflush(stdin);
                            if(keyPressed == UPWARD && submenuY != 4)
                            {
                                submenuY++;
                            }
                            else if (keyPressed == DOWNWARD && submenuY != 3)
                            {
                                submenuY--;
                            }
                            break;
                    case 3:
                            system("cls");
                            printf("1. Vidas paradas\n2. Osciladores\n3. Naves espaciais\n");
                            arrowHere(5,submenuY,flag);printf(" a) Glider\n");
                            arrowHere(6,submenuY,flag);printf(" b) LWSS\n");
                            printf("4. Outros\n");
                            keyPressed = getch();
                            fflush(stdin);
                            if (keyPressed == UPWARD && submenuY != 6)
                            {
                                submenuY++;
                            }
                            else if (keyPressed == DOWNWARD && submenuY != 5)
                            {
                                submenuY--;
                            }
                            break;
                   case 4:
                            system("cls");
                            printf("1. Vidas paradas\n2. Osciladores\n3. Naves espaciais\n4. Outros\n");
                            arrowHere(7,submenuY,flag);printf(" a) Iniciar por arquivo .csv\n");
                            arrowHere(8,submenuY,flag);printf(" b) Populacao invasora\n");
                            keyPressed = getch();
                            fflush(stdin);
                            if (keyPressed == UPWARD && submenuY != 8)
                            {
                                submenuY++;
                            }
                            else if (keyPressed == DOWNWARD && submenuY != 7)
                            {
                                submenuY--;
                            }
                            break;
                }
                if(keyPressed == ENTER)
                {
                    return (submenuY); //unico retorno da função é aqui, o loop para nesse retorno ou quando pressionado seta esquerda/esc
                }
            }
        }
    }
    return 0;
}
void arrowHere(int positionX, int positionY, int mainOrSub)
{
    switch (mainOrSub)
    {
        case 0:
            if(positionX == positionY)
            {
                printf("--> ");
                break;
            }
            else
            {
                printf("    ");
                break;
            }
        case 1:
            if(positionX == positionY)
            {
                printf("---->");
                break;
            }
            else
            {
                printf("     ");
                break;
            }
        case 2:
            if(positionX == positionY)
            {
                printf("         -> ");
                break;
            }
            else
            {
                printf("            ");
                break;
            }
    }
}
int exitMenu(){
    printf("\nFIM DE JOGO!!");
    Sleep(1000);
    int position=1, keyPressed=0;
    while(keyPressed!=ENTER)
    {
        system("cls");
        printf("\tDESEJA JOGAR NOVAMENTE?\n");
        arrowHere(0,position,2);printf("SIM");
        arrowHere(1,position,2);printf("NAO");
        keyPressed=getch();
        fflush(stdin);
        fflush(stdout);
        if(keyPressed == RIGHT && position != 1)
        {
            position++;
        }
        else if(keyPressed == LEFT && position != 0)
        {
            position--;
        }
    }
    return position;
}
void menuInicJogo(Tab *tab){
    tab-> m = alocaMatriz(tab->nL, tab-> nC); //ALOCA TABULEIRO
    Tab invaderTable;
     switch(mainMenu())
     {
        case 1:
                system("cls");
                printProgress("Vida eterna 1", tab);
                inicBloco(tab);
                break;
        case 2:
                system("cls");
                printProgress("Vida eterna 2",tab);
                inicBloco2(tab);
                break;
        case 3:
                system("cls");
                printProgress("Blinker",tab);
                inicBlinker(tab);
                break;
        case 4:
                system("cls");
                printProgress("Sapo",tab);
                inicSapo(tab);
                break;
        case 5:
                system("cls");
                printProgress("Glider",tab);
                inicGlider(tab);
                break;
        case 6:
                system("cls");
                printProgress("LWSS", tab);
                inicLWSS(tab);
                break;
        case 7:
                system("cls");
                printProgress("csv.csv", tab);
                inicCSV(tab,"csv.csv");
                break;
        case 8:
                invaderTable.nL = tab->nL, invaderTable.nC = tab->nC;
                invaderTable.m = alocaMatriz(invaderTable.nL, invaderTable.nC);//aloca nova matriz
                system("cls");
                ShowConsoleCursor(1);
                opcoesInvasores(tab);//prenche a mesa que vai ser invadida
                inicCSV(&invaderTable, "invasores.csv"); //inicia o arquivo "invasores.csv"
                preencheInvasora(tab, &invaderTable);    //faz a invasão
                printf("O novo tabuleiro ficou assim: \n");
                ShowConsoleCursor(0);
                imprimeMatriz(tab);
                printProgress("Celulas invasoras", tab);
                break;
    }
}
void opcoesInvasores(Tab *tab)
{
    int opcao;
    printf("Escolha uma mesa para invadir\n");
    printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\n(6)CSV\nEntre com a opcao: ");
    scanf("%d",&opcao);
   switch(opcao)
   {
     case 1:   inicBloco(tab); break;
     case 2:   inicBlinker(tab); break;
     case 3:   inicSapo(tab); break;
     case 4:   inicGlider(tab); break;
     case 5:   inicLWSS(tab); break;
     case 6:   inicCSV(tab,"csv.csv"); break;
   }
}
void printProgress(char* name, Tab *tab) {//AQUI RECEBE A QUNATIDADE DE CICLOS
    double percentage=0.1;
    int val = (int) (percentage * 100);
    int lpad = (int) (percentage * PBWIDTH);
    int rpad = PBWIDTH - lpad;

    ShowConsoleCursor(1);
    printf("Por favor, informe a quantidade de ciclos: ");
    scanf("%d", &tab->ciclosVida);
    ShowConsoleCursor(0);

    system("cls");
    for(percentage=0.1; percentage<=1; percentage+=0.3)
    {
        val = (int) (percentage * 100);
        lpad = (int) (percentage * PBWIDTH);
        rpad = PBWIDTH - lpad;
        system("cls");
        printf("\t\tCarregando %s\n", name);
        printf("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");//não faço ideia de como funciona, comentario da Laura: /r -> significado: retorno do carro, valor ASCII = 13 (ENTER)
        fflush(stdout);
        Sleep(1000);
    }
    printf("\n");
}
void ShowConsoleCursor(int showFlag) //https://stackoverflow.com/questions/18028808/remove-blinking-underscore-on-console-cmd-prompt
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
