#include <stdio.h>

int main()
{
    //Variaveis
    int total, numeros, impar, par, i, maior, menor;
    float media;

    //anuncio do objetivo do programa e entrada de dados
    printf("Digite o total de numeros:\n");
    scanf("%d", &total);
    
    scanf("%d", &numeros);
    maior = numeros;
    menor = numeros;
    media = numeros;
    
    if (numeros % 2 == 0)
        par++;
    else
        impar++;

    for(i=0; i < total-1; i++){
        scanf("%d", &numeros);
        
        if (numeros % 2 == 0)
            par++;
        else
            impar++;
        
        if(numeros > maior)
            maior = numeros;

        if(numeros < menor)
            menor = numeros;
        
        media += numeros;
        
       
    }

    printf("\n %d %d %d %d %.6f\n", maior, menor, par, impar, ( media / total ) );
    return 0;
    
}