#include <stdio.h>

int main(){
    int x,y;
    printf("Forneça um valor para x: ");
    scanf("%d", &x);
    y = x;
    printf("y = %d\n", y++);
    y = x;
    printf("y = %d\n", ++y);
}

/*
Erros:
Para iniciar o tipo da função main não foi
declarado, é necessário acrescentar 'int' ou
outro tipo.

Explicando a execução:

Primeiramente são anunciadas as variaveis

EM seguida se solicita ao usuário que incira
um valor, e tal valor é armazenado atravéz do
scanf dento da variavel 'x'

Em seguida a variável 'y' recebe o valor de 'x' 
e se exibe essa variável 'y' com o símbolo de ++ 
que soma +1 ao valor de y

Depois se repete o precedimento de ++, se exibe o valor de 'y'
e se encerra o programa. 
*/