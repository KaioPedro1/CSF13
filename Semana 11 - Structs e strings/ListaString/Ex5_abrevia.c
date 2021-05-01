#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRING 100

void nameAbb(char *name, char *abb);
int main(){
    char name[MAXSTRING], abbreviation[MAXSTRING];
    printf("Informe o seu nome completo: ");
        fgets(name, MAXSTRING, stdin);
    nameAbb(name, abbreviation);
   printf("%s\n", abbreviation);
}
void nameAbb(char *name, char *abb){
    int abbIndex=0, i=0, flag=0,j=0;
    char str[MAXSTRING];
        while(name[i]!='\0'&&flag==0){
            j=0;
            while(name[i]!=' '&&name[i]!='\n'){
                if(name[i]=='\0'){
                    flag = 1;
                    break;
                }
                str[j]=name[i];
                i++;
                j++; 
            }
            str[j]='\0';
            i++;
            if(strlen(str)>2){
                abb[abbIndex]=str[0];
                abbIndex++;
                abb[abbIndex]='.';
                abbIndex++;
            }
    }
    abb[abbIndex]='\0';
}       