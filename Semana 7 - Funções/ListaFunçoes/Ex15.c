/*15. Uma seq¨uˆencia de n n´umeros inteiros n˜ao nulos ´e dita piramidal m-alternante se ´e constitu´ıda por m segmentos: o
primeiro com um elemento, o segundo com dois elementos e assim por diante at´e o m-´esimo, com m elementos. Al´em
disso, os elementos de um mesmo segmento devem ser todos pares ou todos ´ımpares e para cada segmento, se seus
elementos forem todos pares (´ımpares), os elementos do segmento seguinte devem ser todos ´ımpares (pares).*/
#include <stdio.h>
int parOuImpar(int n);
int main() {
  int n;
  printf("Informe n: ");
  scanf("%d", &n);

  return 0;
  }
int parOuImpar(int n){
    int i, ehPar=0,ehImpar=0,recebeN;
      for(i=0;i<n;i++){
        scanf("%d", &recebeN);
        if(recebeN%2==0)
          ehPar=1;
          else
          ehImpar=1;
        }
        if(ehPar==ehImpar)
        return -1;
        else if (ehPar==1&&ehImpar==0)
        return 0;
        else
        return 1;
    }
