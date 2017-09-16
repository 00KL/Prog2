#include <stdio.h>

int main()
{
    //Váriaveis
    int primeiro, segundo;

    //Anuncio do objetivo da função e entrada de dados
    printf("Digite dois números inteiros para se verificar qual é o maior entre eles:");
    scanf("%d %d", &primeiro, &segundo);

    //Comparação
    if(primeiro > segundo)
        printf("%d e o maior.\n", primeiro);
    else
        printf("%d e o maior\n", segundo);

    return 0;

}