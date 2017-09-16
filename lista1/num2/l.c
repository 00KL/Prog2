#include <stdio.h>

int main()
{
    //variaveis 
    float temperatura;
    char unidade;

    //Anúncio do objetivo do programa e entrada de dados
    printf("Digite uma temperatura e sua unidade termica para ser convertida para outra unidade termica: ");
    scanf("%f %c", &temperatura, &unidade);

    //Conversão de C para F
    if(unidade == 'c' || unidade == 'C')
    {
        temperatura = ((temperatura*9)/5)+32;
        unidade = 'F';
    }
        
       

    //Conversão de F para C
    else
    {
         temperatura = ( ( temperatura - 32 ) * 5) / 9;
         unidade = 'C';
    }
        
       

    //Resultado da conversão
    printf("%0.2f (%c)\n", temperatura, unidade);

    return 0;
}