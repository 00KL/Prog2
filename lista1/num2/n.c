#include <stdio.h>

int main()
{
    //variaveis
    char vogais[] = "abcdefghijklmnopqrstuvxzABCDEFGHIJKLMNOPQRSTUVXZ";
    char caracter;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite uma caracter para ser transformada em maiuscula: ");
    scanf("%c", &caracter);

    
    for(int i = 0 ; i < 50 ; i++)
    {
        //Há tres condições de parada:

        //caso o caracter esteja entre os 24 primeiros valores
        //da lista vogais ele será uma vogal minuscula
        //logo deve ser somado mais 24 ao indice i e com isso
        //será exibida a versão maiuscula da letra.
        
        //A condição de parada sera por o valor de i em 50 para 
        //que ele não entre no caso de nao ser uma letra e 
        //possa sair do for
        if(caracter == vogais[i] && i < 25)
        {
            printf("%c \n", vogais[i+24]);
            i = 50;
        }
            
        //caso o caracter esteja entre os 24 ultimos valores
        //da lista de vogais ele sera uma vogal maiuscula
        //logo deve ser exibida a mensagem "A letra deve ser
        //minuscula"
        //A condição de parada sera por o valor de i em 50 para 
        //que ele não entre no caso de nao ser uma letra e 
        //possa sair do for
        if(caracter == vogais[i] && i > 24)
        {
            printf("A caracter deve ser minuscula!\n");
            i = 50;
        }

        //caso o caracter não esteja entre os 48 caracteres
        //listados em vogais ele n sera uma letra e entao a
        //frase "Nao e letra!" deve ser exibida.

        //A condição de parada aqui e simplesmente um valor 
        //q estrapola a lista de 48 caracteres q comporta todas
        //as letras do alfabeto minusculo e maiusculo, logo
        //n e uma letra
        if(i == 49)

            printf("Nao e caracter!\n");

    }

    return 0;

}