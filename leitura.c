//1. MARCAÇÃO SEMANAL CONSULTAS

//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>


//Aquivos necessarios
//descide q será mais organizado trabalhar
//criando varios arquivos e importando
//suas funcoes nos outros arquivos
//pois assim poderemos modualizar melhor
#include "exibe.c"

//Funcoes desse codigo
void preencheMedicos( agMedico *);
void nome(FILE *, agMedico *, FILE *);
void tabela(FILE *, agMedico *);
void matriz(char *, agMedico *);
void inserirValor(char *, agMedico *);
void criaArquivoMedico(FILE *, agMedico *, FILE *, char *);
void dadosMedico(FILE *, agMedico *, FILE *, char *);


void preencheMedicos( agMedico *medico){
    //anuncio da varaivel q ira receber
    //o endereco do arquivo
    FILE *arqEntrada;

    FILE *arqSaida;
    //varaivel
    char lixo[1], str[dim];

    //leitura do arquivo dos medicos
    arqEntrada = fopen("dados/dadosMedicos.txt", "r");

    //funcao para criar arquivo com o nome do medico
    criaArquivoMedico(arqEntrada, medico, arqSaida, str);

    //funcao para incerir dados do medico
    dadosMedico(arqEntrada, medico, arqSaida, str);

    //horarios
    //inserirValor(str, medico);

    //test
    colocar(arqEntrada, medico, arqSaida, str);

    
    //pular linhas desnecessárias
    //fgets(lixo, 50, arq);
    //fgets(lixo, 50, arq);

    //id
    //fgets(str, 30, arq);
    //matriz(str, medico);

    //coloca id em pessoa
    


}

void criaArquivoMedico(FILE *arqEntrada, agMedico *medico, FILE *arqSaida, char *str){
    //Variaveis
    char str1[dim+4];
    
    //retira nome do arquivo
    fgets(str, 30, arqEntrada);

    //exibeStr(str);

    //Coloca .txt no final do arquivo
    strcat(str1, str);
    retiraInterrogacao(str1);
    strcat(str1, ".txt");

    //Cria arquivo
    arqSaida = fopen (str1, "w");

    
    //coloca nome em pessoa
    for(int i = 0; i < 30 ; i++){
         medico->nome[i] = str[i];
    }
}

void dadosMedico(FILE *arqEntrada, agMedico *medico, FILE *arqSaida, char *str){
    
    if (!(arqSaida = fopen("Joao Silva da Costa.txt", "w"))){
        printf("tortona \n");
        exit(1);
    }
    
    fprintf(arqSaida, "%s", str);

    fgets(str, 30, arqEntrada);

    fprintf(arqSaida, "%s", str);

    fgets(str, 30, arqEntrada);

    fprintf(arqSaida, "%s", str);

}


void inserirValor(char *str, agMedico *medico){
    int hora = 0, dia, aux;
    dia = str[0] - 50;

    preencheMatriz(medico);

    exibeMatriz(medico);

    
    for(int ho = 4; ho < 11 ; ho+=3){
        for(int i = 0; i < h; i++){
            //printf("%d\n", '10' );
            if( i == (str[ho] - 50) ){
                //printf("minha rola tortona");
                medico->agenda[i][dia] = -1;
                i = h;
            }
        }

    }
    

    //exibeMatriz(medico);


}
  /*
    printf("Digite o codigo do médico: ");
    scanf("%d", &pessoa->id);
    scanf("%c",&lixo);

    printf("Digite o especialidade do médico:");
    for(int i = 0; pessoa->especialidade[i-1] != '\n'; i++){
        scanf("%c", &pessoa->especialidade[i]);
    }
    printf("\n");*/