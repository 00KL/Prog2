//Bibliotecas relevantes para o progama
#include <stdio.h>
#include <stdlib.h>

//Constantes estabelicdas no enunciado
#define dim 30
#define h 10
#define d 5

typedef struct {
    char nome[dim];
    int id;
    char especialidade[dim];
    int agenda[h][d];
} agMedico;

typedef struct {
   char nome[dim];
    int id;
    long int fone;
    int idade;
    char medico[dim];
} cliente; 


void preencheMedicos(char nome[dim], int id, char especialidade[dim], int agenda[h][d]){
    
}

typedef struct {
    char nome[dim];
} test;