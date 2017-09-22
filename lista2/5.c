#include <stdio.h>

int main()
{
    //variaveis
    int pessoas, itens, aux;

    //Entrada de dados e anuncio do objetivo do programa
    printf("Digite o numero de pessoas e quantos itens para saber quem irá receber o último item: ");
    scanf("%d %d", &pessoas, &itens);

    aux = pessoas;

    //
    for(itens; itens != 0; itens--){
    
        pessoas--;

        if(pessoas == 0)
            pessoas = aux;
        
    }

    printf("%d\n", pessoas);
}