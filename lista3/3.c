#include <stdio.h>

int main()
{
    //Variaveis
    int dividendo, divisor, resto = 1;

    //anuncio do objetivo do programa e entrada de dados
    printf("Digite dois numero para saber o M.D.C deles: \n");
    scanf("%d%d", &dividendo, &divisor);
    
    //Primeiro e exibido o dividendo e o divisor
    //pois os valores deles serao alterados durante
    //a execucao
    printf("%d %d ", dividendo, divisor);

    //Aqui se usa o algoritmo de Euclides 
    //,com algumas modificacoes, para calcular
    //o M.D.C do numero
    
    //O algoritmo de euclides se basea na ideia de que
    //entre dois numeros inteiros diferentes a diferença 
    //entre eles, sendo q o menor é multiplicado pelo resto 
    //da divisão entre ambos. Esse processo se repete igualando
    //o maior pelo menor e o menor pelo resto da divisao.
    
    //Quando o resto se igual a 0 o dividendo final sera
    //o maximo divisor comum
    
    while(resto > 0)
    {
        resto = dividendo - divisor*( dividendo / divisor );
        dividendo = divisor;
        divisor = resto;
    }
    
    //Exibindo o M.D.C
    printf("%d\n", dividendo);
    return 0;
    
}