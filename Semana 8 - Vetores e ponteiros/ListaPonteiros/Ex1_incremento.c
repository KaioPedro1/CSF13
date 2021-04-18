#include <stdio.h>
/*Fa¸ca uma fun¸c˜ao que receba dois n´umeros inteiros a e b, em seguida, decremente o primeiro e incremente o segundo.
No exerc´ıcio, a e b devem ser passados por referˆencia. Depois teste, invocando a fun¸c˜ao criada. Prot´otipo:
void questao01(int *a, int *b)
*/
void questao01(int*a, int*b);
int main(){
    int a,b;
    int *pontA,*pontB;//não precisava desse ponteiro
    scanf("%d %d", &a,&b);
    pontA=&a;
    pontB=&b;
    questao01(pontA, pontB);//podia enviar o endereço de a e b
    return 0;

}
void questao01(int *a, int *b){
    *a=*a-1;
    *b=*b+1;
    printf("%d\n""%d\n" ,*a, *b);
}