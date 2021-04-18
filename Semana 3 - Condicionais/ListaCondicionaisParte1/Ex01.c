/*OBI - Exerc´ıcio do Bondinho. A turma do col´egio vai fazer uma excurs˜ao na serra e todos os alunos e monitores v˜ao
tomar um bondinho para subir at´e o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no m´aximo,
contando alunos e monitores, durante uma viagem at´e o pico. Neste problema, dado como entrada o n´umero de alunos
e o n´unero de monitores, vocˆe deve implementar um programa que diga se ´e poss´ıvel ou n˜ao levar todos os alunos e
monitores em apenas uma viagem*/
#include <stdio.h>

int
main ()
{
  int alunos, monitores;
  printf("Insira a quantidade de alunos: ");
  scanf ("%d", &alunos);
  printf("Insira a quantidade de monitores: ");
  scanf ("%d", &monitores);

    if(alunos+monitores>50)
    {
        printf("Nao eh possivel levar em uma viagem");
    }
    else
    printf("Eh possivel levar em uma viagem");
    return 0;
}
