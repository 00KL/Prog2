#include <stdio.h>

int main()
{
    //Variaveis
    int numero, i,metade;

    //Entrada de dados
    scanf("%d", &numero);

    //Checagem se o valor é igual a 2, 1 ou 0, isso porque
    //já se exclui aqui todos os pares e 1 e 0, porque nao
    //sao primos e n se encaixao na verificaçao colocada
    //no for
    if((numero % 2 == 0) || (numero == 1) || (numero == 0) )
        if(numero == 2)
            printf("Primo\n");
        else
            printf("Nao primo\n");
    else

        //Agora se testa todos os impares. Caso o valor
        //seja divisovel por um numero qualquer diferente
        //dele mesmo e 1 ele n sera primo. Caso contrario
        //a variavel i recebe n recebera 0, assim
        //se pode afirmar q o valor e sim primo.
        metade = numero/2;
        for(i = 3; (i < metade) && (i != 0) ; i += 2){

            if((numero % i == 0) && ( numero != i) ){
                printf("Nao primo\n");
                i = 0;
            }
        }

    if(i != 0)
        printf("Primo\n");

    return 0;
}
