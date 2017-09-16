#include <stdio.h>
#include <math.h>

int main()
{
    int primeiro, segundo;
    float soma;

    printf("Digite dois valores para saber a soma de suas raizes:");
    scanf("%d %d", &primeiro, &segundo);

    soma = sqrt(primeiro) + sqrt(segundo);
    
    printf("%0.2f \n", soma);
}