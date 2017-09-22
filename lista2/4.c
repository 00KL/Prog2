#include <stdio.h>

int main()
{
    //Váriaveis
    int primeiro, segundo, terceiro;

    //Anuncio do objetivo da função e entrada de dados
    printf("Digite 3 numeros para serem ordenados de forma crescente:");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    //Comparação
    if(primeiro < segundo)

        if(primeiro < terceiro)

            if(segundo < terceiro)
              printf("N1 = %d, N2 = %d, N3 = %d\n", primeiro, segundo, terceiro);

            else
              printf("N1 = %d, N3 = %d, N2 = %d\n", primeiro, terceiro, segundo);

        else
            printf("N3 = %d, N1 = %d, N2 = %d\n", terceiro, primeiro, segundo);

    else

        if(segundo < terceiro)

            if (primeiro < terceiro)
              printf("N2 = %d, N1 = %d, N3 = %d\n", segundo, primeiro, terceiro);

            else
              printf("N2 = %d, N3 = %d, N1 = %d\n", segundo, terceiro, primeiro);

        else
            printf("%d %d %d\n", terceiro, segundo, primeiro);

    return 0;

}
