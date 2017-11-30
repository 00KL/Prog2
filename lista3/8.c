#include <stdio.h>
#include <math.h>

int main()
{
    //Variaveis
    int numero, i;
    float s;

    //Entrada de dados
    scanf("%d", &numero);

    //O "for" compara se a soma da proxima potencia de "e"
    //à varavael s é maior que o numero dado, caso seja
    //o "for" acaba, caso n o "for" soma ate alcançar o valor
    //mais proximo possivel de "numero".
    for( i = 0 ; (s + exp(i)) <= numero; s += exp(i), i++ );

    //Exibir resposta
    printf("%d %.6f \n ", i, s);
}
