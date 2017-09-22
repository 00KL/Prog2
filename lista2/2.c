#include <stdio.h>
#include <math.h>

int main()
{
  //variaveis
  int nota[2];
  float media;

  //Anuncio do objetivo do programa e entrada de dados
  printf("Digite 2 notas para saber sua média:\n" );
  scanf("%d %d", &nota[0], &nota[1] );

  //calculo da media
  media = (nota[0] + nota[1]) / 2;

  //O aluno está aprovado?

    if( media >= 7 || media < 5)

      if(media >= 7)
        printf("%.1f-Aprovado\n", media ) ;

      else
        printf("%.1f-Reprovado\n", media );

    else
      printf("%.1f-De Recuperacao\n", media );

}
