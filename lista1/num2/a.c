#include <stdio.h>

int main ()
{
    //variáveis
    int primeiro, segundo, terceiro;

    //Anuncio da função do programa e entrada de dados
    printf("Digite 3 números para saber a média entre eles: ");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    //Processamento: soma dos três valores e divisão por 3
    primeiro = primeiro + segundo + terceiro;
    
    //Exibição do resultado
    printf("Sua média é: %d\n", primeiro);

    return 0;
}