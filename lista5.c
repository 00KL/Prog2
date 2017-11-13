#include <stdio.h>
#define tamanho 100

//Funcoes mais usadas
void entradavetor(int *, int *);
void entradavetor(int *vet, int *tam){
    
        scanf("%d", tam);
    
        printf("\n");
    
        for(int i = 0; i < *tam; i++ ){
            scanf("%d", &vet[i]);
    
        }
    
        printf("\n");
    
}

void exibevetor(int *vet, int *tam){
    
    printf("%d \n", *tam);

    for(int i = 0; i < *tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
    
}
//Funcoes mais usadas

//Questão 6{

void retirada(int *vet, int *tam){
    int x, cont = 0;
    scanf("%d", &x);

    printf("\n");

    *tam = *tam - 1;

    for(int i = *tam; i >= 0 ; i--){

        if(vet[i] == x){
            
            for(int j = i ; j < *tam ; j++){
                vet[j] = vet[j+1];
            }

            cont++;

        }

    }

    //printf("%d \n", *tam);

    *tam = *tam - cont;

    //printf("%d \n", cont);

}

void retirar(){
    int vet[tamanho], tam;

    entradavetor(vet, &tam);

    retirada(vet, &tam);

    exibevetor(vet, &tam);
    
}

//Questão 6

//Questão 8

void paresimpares(int *A, int *n1){
   
    int aux;


    if( (*n1 % 2) != 0 ){
        for(int i = 0; i < (*n1-1); i+=2){
            aux = A[i];
            A[i] = A[i+1];
            A[i+1] = aux;
        }
    } 
    else{
        for(int i = 0; i < *n1; i+=2){
        aux = A[i];
        A[i] = A[i+1];
        A[i+1] = aux;
        }
    }

    
}

void troca(){
    int A[tamanho], n1;

    entradavetor(A, &n1);

    paresimpares(A, &n1);

    exibevetor(A, &n1);
    
}

//Questão 8

//Questão 9

void inserir(int *vet, int x, int pos, int *tam){
    
    for(int i = *tam; i >= pos; i--){
        vet[i+1] = vet[i];
    }

    vet[pos] = x;

    *tam += 1;

    printf("\n");
}

void insercao(){
    int v[tamanho] = {0}, x, pos, tam;

    entradavetor(v, &tam);

    scanf("%d %d", &x, &pos);

    inserir(v, x, pos, &tam);

    exibevetor(v, &tam);


}

//Questão 9

//Questão 10

void inverter(){
    int x, invertido = 0;

    scanf("%d", &x);

    for(x; x > 0; x= x/10){
        invertido *= 10;
        invertido += x % 10;
    }
    
    printf("\n%d\n", invertido);
}

//Questão 10


int main(){

    int escolha;

    scanf("%d", &escolha);

    printf("\n");

    switch(escolha){
        case 6:
            retirar();
            break;

        case 8:
            troca();
            break;

        case 9: 
            insercao();
            break;

        case 10:
            inverter();
            break;
    }

    return 0;
    
}