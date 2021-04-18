#i n cl u d e <s t d i o . h>
i n t main ( )
{
i n t n1 , n2 , n3 , aux ;
i f ( n2 >= n3 )
{
aux = n2 ;
n2 = n3 ;
n3 = aux ;
}
i f ( n1 >= n2 ) //compara o primeiro valer com o segundo, se o primeiro for maior ou igual ele troca de valores entre eles//
{
aux = n1 ;
n1 = n2 ;
n2 = aux ;
i f ( n2 >= n3 ) // mesma coisa do de cima, le o valor do segundo e se ele for maior que o terceiro troca de valor//
{
aux = n2 ;
n2 = n3 ;
n3 = aux ;
}
}
p r i n t f (”%d %d %d\n ” , n1 , n2 , n3 ) ;  //imprime em ordem crescente//
r e t u r n ( 0 ) ;
}
Sem executar o programa, responda:
• Qual ser´a a sa´ıda se atribuirmos no inıcio os valores 1, 2 e 3 a n1, n2 e n3, respectivamente? //1,2,3
//

• Qual ser´a a sa´ıda se atribuirmos no inıcio os valores 20, 10 e 30 a n1, n2 e n3, respectivamente? // 10,20,30
//
• Qual ser´a a sa´ıda se atribuirmos no inıcio os valores 5*5, n1/2 e n2+1 a n1, n2 e n3, respectivamente? // 12,13,25
//
• (****) O que o programa faz, exatamente? Explique o funcionamento do algoritmo.
// o programa pega 3 numeros inteiros fornecidos pelo usuario e ordena na ordem crescente//
• Para carregar a resposta a este exerc´ıcio, transcreva o c´odigo fonte acima e indique as respostas como comentarios
// ou /*...*/ num arquivo do codeblocks ou um editor de texto (txt) qualquer.
