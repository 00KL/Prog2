#include <stdio.h>
#include <math.h>

int main()
{
  //variaveis
  float superior[2], inferior[2], perimetro;

  //Entrada de dados e anuncio do objetivo do programa
  printf("Digite o canto inferior esquerdo e o superior direito\n" );
  scanf("%f %f %f %f", &inferior[0], &inferior[1], &superior[0], &superior[1] );

  //Soma dos lados
  perimetro = sqrt( ( pow( (inferior[0] - inferior[0]), 2) ) +
                    ( pow( (inferior[1] - superior[1]),  2) ) )  * 2;

  perimetro += sqrt( ( pow( (inferior[0] - superior[0]) , 2) ) +
                  ( pow( (inferior[1] - inferior[1]), 2) ) )  * 2;

  //Resultado
  printf("%.2f \n", perimetro );

}
