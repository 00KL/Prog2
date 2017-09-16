#include <stdio.h>

int main()
{
    //variaveis 
    float temperatura;

    //Anúncio do objetivo do programa e entrada de dados
    printf("Digite um valor em Celsius para ser convertido para Fahrenheit: ");
    scanf("%f", &temperatura);

    //Conversão de C para F
    temperatura = ((temperatura*9)/5)+32;

    //Resultado em F
    printf("O valor digitado em Fahrenheit e: %0.2f.\n", temperatura);

    return 0;
}