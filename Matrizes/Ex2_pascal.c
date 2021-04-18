#include <stdio.h>
#include <stdlib.h>
#define size 10

void pascalTriangle(int m[size][size]);
int main(){
    int matrix[size][size];
    pascalTriangle(matrix);
}
void pascalTriangle(int m[size][size]){
        int i,j;
        for(i=0;i<size;i++){
            for(j=0;j<=i;j++){
                if(j==0 || j==i){//PRENCHE AS EXTREMINADADES DO TRINANGULO COM VALOR 1
                    m[i][j]=1;
                    printf("%d\t", m[i][j]);    
                }
                else{
                    m[i][j]=m[i-1][j-1]+m[i-1][j];
                    printf("%d\t", m[i][j]);}
            }
            printf("\n");
        }

}







