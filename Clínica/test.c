#include <stdio.h>
#include <stdlib.h>
#include "structs.c"

int main(){
    test lucas;
    int fim;

    printf("tortona\n");

    printf("\n");

   
    for(int i = 0; i < dim; i++){
        scanf("%c", &lucas.nome[i]);

        if(lucas.nome[i] == '.'){
            fim = i;
            i = dim;
            lucas.nome[i] = ' ';
        }
    }

    printf("\n");

    for(int i = 0; i < fim; i++){
        printf("%c", lucas.nome[i]);
    }

    printf("\n");
    
 /*
    for(int i; i < dim; i++){
        printf("%c", lucas.nome[i]);
    }

    
    */

    return 0;
}