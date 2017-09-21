#include <stdio.h>

int main()
{
    //variaveis
    char caracter;

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite uma caracter para ser transformada em maiuscula: ");
    scanf("%c", &caracter);

    if( (caracter < 91 && caracter > 64) || (caracter < 122 && caracter > 96) )
    
        if(caracter < 122 && caracter > 96) 
        printf("%c \n", (caracter - 32) ) ;

        else 
            printf("O caracter deve ser minuscula!\n");
    
    else
        printf("Nao e caracter!\n");
        
    return 0;

}