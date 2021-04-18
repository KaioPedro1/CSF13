#include<stdio.h>
#include <math.h>
/*2. Crie uma fun¸c˜ao que receba os valores a, b e c passados por valor, e receba tamb´em dois valores x1 e x2 passados por
referˆencia. Em seguida, calcule e retorne as duas ra´ızes da equa¸c˜ao do segundo grau nas vari´aveis x1 e x2. Prot´otipo:
int calcula raizes(float a, float b, float c, float *x1, float *x2)*/
int calculaRaizes(float a, float b, float c, float *x1, float *x2);
int main (void){
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float *x1, *x2, xe1=0,xe2=0;//novamente não precisava criar esse ponteiro, podia passar por referenncia na funçao
        if(calculaRaizes(a,b,c,&xe1,&xe2)==0)
            printf("%f, %f\n", xe1,xe2);
        else if (calculaRaizes(a,b,c,&xe1,&xe2)==1)
            printf("Nao existem raizes reais.\n");
        else if(calculaRaizes(a,b,c,&xe1,&xe2)==2)    
            printf("%f\n", xe1);
}
int calculaRaizes(float a, float b, float c, float *x1, float *x2){
    float discriminant=sqrt((b*b)-4*a*c);
        if (discriminant>0){
            *x1=(-b+discriminant)/(2*a);
            *x2=(-b-discriminant)/(2*a);
            return 0;
            }
            else if(discriminant==0){
                *x1=(-b+discriminant)/(2*a);//faltou a segunda raiz
                *x2=*x1;
                return 2;
            }
            else
                return 1;
}





