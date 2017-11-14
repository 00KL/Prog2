#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100
#define N 5

//Questão1
void vogais();
void entradastring(char *);
void contvogal(char *);
//Questão1

//Questão2
void insirax(int *,int  *, int *, int *);
void insercao();
//Questão2

//Questão3
void crescente();
void quant(int *, int *);
void quantindividual(int *, int , int *, int *);
void retirarx(int *, int *, int *);
//Questão3

//Questão 4
void gerar();
void preenchimento(int *);
//QUestão 4

//Questão 7
void incrementa(int *);
void chamaincrementa();
//Questão 7

//Questão 8
void mdceprimo();
void mdc(int , int );
void primos(int , int);
//Questão 8

//mais usadas
void entradavetor(int *, int *);
void exibevetor(int *, int *);
void entradavetor(int *vet, int *n){
    for(int i = 0; i < *n; i++){
        scanf("%d", &vet[i]);
    }
}
void exibevetor(int *vet, int *n){
    for(int i = 0; i < *n; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
}
//mais usadas



//Questão 1
void vogais(){

    char string[tam];

    entradastring(string);

    contvogal(string);
}

void entradastring(char *string){
    printf("\n");
    int i = -1;
    do{
        i++;
        scanf("%c", &string[i]);
        
    }while(string[i] != '.');

}

void contvogal(char *string){
    int cont = -1;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    
    do{
        cont++;
        
        if(string[cont] == 'a'){
            a++;
        }

        else if(string[cont] == 'e'){
            e++;
        }

        else if(string[cont] == 'i'){
            i++;
        }

        else if(string[cont] == 'o'){
            o++;
        }

        else if(string[cont] == 'u'){
            u++;
        }
        
    }while(string[cont] != '.');

    printf("\n%d - 'a'", a);
    printf("\n%d - 'e'", e);
    printf("\n%d - 'i'", i);
    printf("\n%d - 'o'", o);
    printf("\n%d - 'u'", u);
    printf("\n");
}
//Questão 1

//Questão 2
void insercao(){
    int V[tam], x, pos, n;

    scanf("%d", &n);

    entradavetor(V, &n);

    insirax(V, &n, &x, &pos);

    exibevetor(V, &n);

}

void insirax(int *V,int  *n, int *x, int *pos){
    
    scanf("%d %d", x, pos);
    
    for(int i = *n; i >= *pos; i--){
        V[i] = V[i-1];
    }

    *n = *n + 1;

    V[*pos] = *x;
}
//Questão 2

//Questão 3
void crescente(){
    int vet[tam], n;

    scanf("%d", &n);

    entradavetor(vet, &n);

    quant(vet, &n);
}

void quant(int *vet, int *n){
    //int tamanho = *n;
    for(int i = 0; i < *n; i++ ){
        quantindividual(vet, vet[i], n, &i);
    }
}

void quantindividual(int *vet, int v, int *n, int *pos){
    int cont = 0;
    
    for(int i = *pos; i < *n ; i++){
        if(vet[i] == v){

            //printf("\n%d \n", i);
            cont++;
            retirarx(vet, &i, n);
            i--;
        }
    }

    *pos = *pos - 1;

    printf("\n%d - %d\n", v, cont);
}

void retirarx(int *vet, int *x, int *n){
    for(int i = *x;  i < *n ; i++){
        vet[i] = vet[i+1];
    }
    
    *n = *n - 1;
    
    //printf("\n");
    //exibevetor(vet, n);

    
}
//Questão 3

//Questão 4
void gerar(){
    int vetor[N];
    int tamanho = N;
    srand(time(NULL));
    preenchimento(vetor);
    exibevetor(vetor, &tamanho);

}

void preenchimento(int *vetor){
    for(int i = 1; i < N; i++){
        vetor[i] = rand()%100;
    }
}
//Questão 4

//Questão 7
void incrementa(int *x){
    int n = 2;
    *x += n;
}

void chamaincrementa(){
    int y = 10;
    incrementa(&y);
    printf("\n%d\n", y);
}
//Questão 7

//Questão 8
void mdceprimos(){
    int x, y;

    scanf("%d%d", &x, &y);

    mdc(x, y);

    primos(x, y);

}

void mdc(int x, int y){
    int aux = 0, cont;

    while(y%x != 0){
        aux = y%x;
        y = x;
        x = aux;
    }

    printf("\n%d\n", x);

}

void primos(int x, int y){
    int cont = 0;
    
    for(int i = 1; i <= x; i++){
        if( (x%i == 0) && (y%i == 0) ){
            cont++;
        } 
    }

    if(cont == 1){
        printf("\nOs numeros sao primos entre si.\n");
    }
    else{
        printf("\nOs numeros nao sao primos entre si.\n");
    }

}
//Questão 8

//Main
int main(){
    int escolha;

    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            vogais();
            break;

        case 2:
            insercao();
            break;

        case 3:
            crescente();
            break;

        case 4:
            gerar();
            break;

        case 7:
            chamaincrementa();
            break;

        case 8:
            mdceprimos();
            break;
    }
}