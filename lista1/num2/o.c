#include <stdio.h>

int main()
{
    //variaveis
    int numero;

    //Anuncio de objetivo do programa e entrada de dados
    printf("Digite um numero para saber se e par ou impar:");
    scanf("%d", &numero);

    //Checagem se o número é par ou impar
    //Basta checar o resto da divisão por 2
    //numeros pares tem resto 0
    if( ( numero % 2 )  == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
