#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
}Tempo;
void secondsToHourAndMin(Tempo *p);//referencia
Tempo secondsToHourAndMin2(int segundos);

int main(){
    Tempo inputSeconds, *pointer;
    pointer = &inputSeconds;
    printf("Informe o total de segundos: ");
    scanf("%d", &inputSeconds.segundos);
    inputSeconds=secondsToHourAndMin2(inputSeconds.segundos);
   // secondsToHourAndMin(pointer);
    printf("%d:%d:%d", inputSeconds.horas,inputSeconds.minutos,inputSeconds.segundos);
}

void secondsToHourAndMin(Tempo *p){
    p->horas = p->segundos/3600;
    p->segundos=p->segundos%3600;
    p->minutos=p->segundos/60;
    p->segundos=p->segundos%60;
}
Tempo secondsToHourAndMin2(int segundos){
    Tempo insideStruct;
    insideStruct.horas=segundos/3600;
    segundos=segundos%3600;
    insideStruct.minutos=segundos/60;
    insideStruct.segundos=segundos%60;
    return (insideStruct);
}
