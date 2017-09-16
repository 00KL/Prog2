#include <stdio.h>

int main()
{
    //variaveis
    char vogais[] = "aeiouAEIOU";
    char letra;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite uma letra e descubra se ela é um vogal ou nao: ");
    scanf("%c", &letra);

    //Para descobrir se a letra é uma vogal basta comparar
    //ela com todos os elementos da lista de 10 caracteres 
    //que compoem o numero de vogais maiusculas e minusculas
    //do alfabeto.
    for(int i = 0 ; i < 11 ; i++)
    {
        //Há duas condições de parada:

        //Caso seja uma vogal basta modificar o contador do for
        //para 11 e a checagem é finalizada e o resultado exibido
        if(letra == vogais[i])
        {
            printf("Vogal");
            i = 11;
        }

        //Caso seja uma consoante o contador irá chegar a 10, o
        //que significa a posição 11, que nao existe na lista de
        //vogais, logo e exibida a mensagem nao e uma vogal atravez
        //de outro if.
        if(i == 10)
            printf("Nao vogal");


    }

    return 0;

}

