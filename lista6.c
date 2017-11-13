#include <stdio.h>
#define tam 100

//Questão1
void vogais();
void entradastring(char *);
void contvogal(char *);
//Questão1



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
    int V[tam], x, pos;

    scanf("%d", &n)
}

//Questão 2

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
    }
}