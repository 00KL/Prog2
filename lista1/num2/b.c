#include <stdio.h>
#include <math.h>


int main()
{
    //variaveis
    float graus;

    //Anúncio do objetivo do programa e entrada de dados
    printf("Digite o valor em gruas para saber seu Seno Sosseno e Tangente: ");
    scanf("%f", &graus);

    //Conversão de gruas para radianos
    graus = graus * 0.0174444;

    //Exibição resultados
    printf("\nSeno: %0.2f\n", sin(graus));
    printf("Cosseno: %0.2f\n", cos(graus));
    printf("Tangente: %0.2f\n", tan(graus));

    return 0;
}