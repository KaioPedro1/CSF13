/*3. Desenvolva um programa que leia a quantidade total de segundos e converta para Horas, Minutos e Segundos. Imprima
o resultado da convers˜ao no formato HH:MM:SS. Para isso, utilize a fun¸c˜ao com prot´otipo
void converteHora(int total segundos, int *hora, int *min, int *seg)
*/
#include <stdio.h>
#include <math.h>
void converteHora(int totalSecond, int*hour, int*min, int*sec);
int main(){
int segundos, hour=0, min=0, sec=0;
printf("Informe a qtd de segundos: ");
scanf("%d", &segundos);
converteHora(segundos, &hour, &min,&sec);
printf("%d:%d:%d\n", hour,min,sec);
}
void converteHora(int totalSecond, int*hour, int*min, int*sec){
    *hour=totalSecond/3600;
    totalSecond=totalSecond%3600;
    *min=totalSecond/60;
    totalSecond=totalSecond%60;
    *sec=totalSecond;
}