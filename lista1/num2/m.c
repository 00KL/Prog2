#include <stdio.h>

int main()
{
    //variaveis
    char letra;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite uma caracter e descubra se ela é um vogal ou nao: ");
    scanf("%c", &letra);

    //Para descobrir se a caracter é uma vogal basta checar se
    //ela corresponde as posições da tabela ASCII referentes aos 
    // as vogais
    
    if( letra == 65 || letra == 69 ||  letra == 73 || letra == 79 || letra == 85 ||
        letra == 97 || letra == 101 || letra == 105 || letra == 111 || letra == 117)
        
        printf("Vogal \n");
    
    else 
        printf("Nao vogal\n");
    
    return 0;

}

