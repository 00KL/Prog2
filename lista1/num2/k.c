#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main()
{
    //Variaveis
    float r;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite o raio de uma circunferencia para saber sua área e o raio de outro circulo com metedade de sua area: ");
    scanf("%f", &r);

    //calculo da área do circulo
    r = pow(r, 2) * pi;

    //Exibir area
    printf("%0.2f ", r );

    //Calculo do raio q e a metade do anterior
    //Aqui se divide a área anteriormente calculada 
    //e se faz o procesimento inverso do calculo da area
    //ou seja: se divide por pi e se faz a raiz quadrada
    //do quociente da divisão
    r = sqrt( ( r / (2*pi) ) );

    //Exibir raio de outro circulo com metade da area
    printf("%0.2f \n" , r );
}