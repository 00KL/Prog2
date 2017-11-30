#include <stdio.h>

int main()
{
    //Variaveis
    int primeiro, segundo;

    //anuncio do objetivo do programa e entrada de dados
    printf("Digite um intervalo para saber quantos numeros");
    printf("multiplos de 3, 4 e 7 há nele: \n");
    scanf("%d%d", &primeiro, &segundo);
    
    //O "for" irá somar +1 no valor primeiro ate alcançar
    //o segundo, enquanto somente os valores q divididos
    //por 2 tem resto 0, os pares, são exibidos.
    
    //Caso os valores do intervalo sejam iguais 
    //o retorno sera vazio pois n entrara no if interno
    //do for.

    //O primeiro começa a contar atravez de primeiro++
    //porque o primeiro numero n e considerado na checagem
    //segundo o enunciado do exercicio
    for(primeiro++; primeiro < segundo; primeiro++)
        if( (primeiro % 3 == 0) 
            || (primeiro % 4 == 0) 
            || (primeiro % 7 == 0)  )
                printf("%d ", primeiro);
    
    
    printf("\n");
    return 0;
    
}