#include <stdio.h>
#include <math.h>

int main()
{
    //Variaveis
    float r;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite o raio de uma circuferencia para saber sua área: ");
    scanf("%f", &r);

    //calculo da área do circulo
    r = pow(r, 2) * 3.14;

    //Exibir resultado
    printf("%0.2f e a área do circulo.\n", r );
}