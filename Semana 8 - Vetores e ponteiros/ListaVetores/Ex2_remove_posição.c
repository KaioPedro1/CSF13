/*2. Escreva um programa que preenche com valores aleat´orios um vetor de N posi¸c˜oes, onde N ´e uma constante pr´edefinida. Dada uma posi¸c˜ao do vetor (informada pelo usu´ario), o programa deve remover o elemento desta posi¸c˜ao,
“puxando” todos os elementos das posi¸c˜oes posteriores uma posi¸c˜ao para “tr´as”. Por exemplo, se o vetor cont´em os
n´umeros 1, 3, 6, 2 e 10 e o usu´ario digita 2, o programa deve remover o elemento na posi¸c˜ao n´umero 2 do vetor - o
6 (lembre-se que a contagem inicia em 0) - ficando com os n´umeros 1, 3, 2 e 10. Ap´os a remo¸c˜ao, o programa deve
mostrar o “novo” vetor na tela*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void removePosition(int input[], int size);
int main(){
    int array[N],i, remove;
    srand(time(NULL));
    for(i=0; i<N; i++){
        array[i]=rand()%100;
            printf("%d\n", array[i]);
    }
        printf("Informe a posicao que deseja remover de 0 a N: ");
        scanf("%d", &remove);
        removePosition(array, remove);     //esqueci de verificar se numero maior que 10 ou menor que 0 
}    

void removePosition(int input[], int remove){
    int i;
            while(remove<N-1){
                input[remove]=input[remove+1];
                remove++;
       }
        for(i=0; i<N-1; i++){
            printf("%d\n", input[i]);
    }
}