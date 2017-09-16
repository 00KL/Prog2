#include <stdio.h>

int main()
{
    //Váriaveis
    int primeiro, segundo, terceiro;

    //Anuncio do objetivo da função e entrada de dados
    printf("Digite tres números inteiros para se verificar qual é o menor entre eles:");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    //Comparação
    if(primeiro < segundo)
        
        if(primeiro < terceiro)
            printf("%d e o menor.\n", primeiro);
        
        else
            printf("%d e o menor.\n", terceiro);
    else
        
        if(segundo < terceiro)
            printf("%d e o menor.\n", segundo);
        
        else 
            printf("%d e o menor.", terceiro);

    return 0;

}