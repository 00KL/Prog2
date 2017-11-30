#include <stdio.h>

int main()
{
    //Variaveis
    int numeros, maior, cont;
    float media = 0.0;

    //anuncio do objetivo do programa e entrada de dados
    printf("Digite valores para descobrir o maior e a media de todos: \n");

    scanf("%d", &numeros);
    maior = numeros;

    while(numeros != 0)
    {
        
        if(numeros > maior)
            maior = numeros;
        
        media += numeros;
        cont++;

        printf("\n%d %.6f\n\n", maior, (media / cont));

        scanf("%d", &numeros);
    }

    return 0;
    
}