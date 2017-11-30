#include <stdio.h>
#include <math.h>

int main()
{
    float n, k, pi = 0;

    scanf("%f", &n);

    for(k = 1; k < n+1; k++)
        pi += (6.0 / (pow(k , 2)) );
    
    printf("%.6f \n", sqrt(pi) );
}