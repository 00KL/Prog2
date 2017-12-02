//Bibliotecas relevantes para o progama
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.c"

//Constantes estabelicdas no enunciado
#define dim 30
#define h 10
#define d 5

//funcoes
void exibeMatriz(agMedico *);
void preencheMatriz(agMedico *medico);
void horas(int );
void colocarValor(agMedico *, int *, int, int);
void extrair(char *, int *, int *);

void exibeStr(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
}
void exibeMatriz(agMedico *medico){

    //dias
    printf("        2a   3a   4a   5a   6a\n");



    for(int ho = 0; ho < h; ho++){
        
        horas(ho);

        for(int di = 0; di < d; di++){//printf("%d    ", medico->agenda[di][ho]);

            if(medico->agenda[ho][di] == -1){
                printf("%d   ", medico->agenda[ho][di]);
            }
            else{
                printf(" %d   ", medico->agenda[ho][di]);
            }
        }
        printf("\n");
    }

}

void horas(int hora){
    switch(hora){
        case 0: printf("   8-9  ");
                break;
        case 1: printf("  9-10  ");
                break;
        case 2: printf(" 10-11  ");
                break;
        case 3: printf(" 11-12  ");
                break;
        case 4: printf(" 12-13  ");
                break;
        case 5: printf(" 13-14  ");
                break;
        case 6: printf(" 14-15  ");
                break;
        case 7: printf(" 15-16  ");
                break;
        case 8: printf(" 16-17  ");
                break;
        case 9: printf(" 17-18  ");
                break;
    }
}

void preencheMatriz(agMedico *medico){
    for(int ho = 0; ho < h; ho++){
        
        for(int di = 0; di < d; di++){
            
            medico->agenda[ho][di] = 0;
            if(ho == 4){
                medico->agenda[ho][di] = -1;
            }

        }
    }
}

void colocar(FILE *arqEntrada, agMedico *medico, FILE *arqSaida, char *str){
    
    fgets(str, 30, arqEntrada);

    int indice = str[0] - 50 , posicao[h], cont = 0;

    preencheMatriz(medico);

    extrair(str, posicao, &cont);

    colocarValor(medico, posicao, indice, cont);

    cont = 0;

    printf("\n");
//////////////////////////////////////////////////////////////////////

    fgets(str, 30, arqEntrada);

    indice = str[0] - 50;

    extrair(str, posicao, &cont);

    colocarValor(medico, posicao, indice, cont);

    cont = 0;

    printf("\n");
////////////////////////////////////////////////////////////////////////

    fgets(str, 30, arqEntrada);

    indice = str[0] - 50;

    //printf("%d ", indice);

    extrair(str, posicao, &cont);

    colocarValor(medico, posicao, indice, cont);

    printf("\n");
//////////////////////////////////////////////////////////////////////

    exibeMatriz(medico);
}

void colocarValor(agMedico *medico, int *posicao, int indice, int cont){
    
    for(int i = 0; i < cont ; i++ ){
        medico->agenda[posicao[i]][indice] = -1;
    }
    
}

void extrair(char *str, int *posicao, int *cont){
    
    for(int i = 4; str[i-2] != '\n'; i += 3){ 
        //printf("%c ", str[i]);
        switch(str[i]){
            case '8': 
                posicao[*cont] = 0;
                *cont+= 1;
                break;
            case '9': 
                posicao[*cont] = 1;
                *cont+= 1;
                break;
            case '0': 
                posicao[*cont] = 2;
                *cont+=1;
                break;
            case '1': 
                posicao[*cont] = 3;
                *cont+=1;
                break;
            case '2': 
                posicao[*cont] = 4;
                *cont+=1;
                break;
            case '3': 
                posicao[*cont] = 5;
                *cont+=1;
                break;
            case '4': 
                posicao[*cont] = 6;
                *cont+=1;
                break;
            case '5': 
                posicao[*cont] = 7;
                cont+=1;
                break;
            case '6': 
                posicao[*cont] = 8;
                *cont+=1;
                break;
            case '7': 
                posicao[*cont] = 9;
                *cont+=1;
                break;
        }
        
    }

    exibeStr(str);

    for(int i = 0; i < *cont; i++){
        printf("%d ", posicao[i]);
    }
    
    printf("\n");

}