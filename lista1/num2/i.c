#include <stdio.h>

void main()
{

    //Variaveis
    int _quantia;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite um valor pra saber em quais cedulas pagar:");
    scanf("%d", &_quantia);

    //Cedulas para pagar o valor dado pelo cliente.
    //Cada if ira comparar o resto da divisão(apenas as casas
    //interias), e caso seja diferente de 0 significa que
    //o _quantidade é maior que a moeda ou igual a ela
    //assim sendo o  resultado dessa divisão será a quantidade
    //daquela moeda que sera usada para pagar a _quantidade em questão.
    
    //100
    if( (_quantia/100) != 0 )
    {
        printf ("%d notas de 100\n", _quantia/100 );
        _quantia = _quantia - (_quantia/100) * 100;
    }

    //50
    if( (_quantia/50) != 0 )
    {
        printf ("%d notas de 50\n", _quantia/50 );
        _quantia = _quantia - (_quantia/50) * 50;
    }

    //25
    if( (_quantia/25) != 0 )
    {
        printf ("%d notas de 25\n", _quantia/25 );
        _quantia = _quantia - (_quantia/25) * 25;
    }

    //10
    if( (_quantia/10) != 0 )
    {
        printf ("%d notas de 10\n", _quantia/10 );
        _quantia = _quantia - (_quantia/10) * 10;
    }

    //5
    if( (_quantia/5) != 0 )
    {
        printf ("%d notas de 5\n", _quantia/5 );
        _quantia = _quantia - (_quantia/5) * 5;
    }

    //2
    if( (_quantia/2) != 0 )
    {
        printf ("%d notas de 2\n", _quantia/2 );
        _quantia = _quantia - (_quantia/2) * 2;
    }

    //1
    if( (_quantia/1) != 0 )
    {
        printf ("%d notas de 1\n", _quantia );
    }
}