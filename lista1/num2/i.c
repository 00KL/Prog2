#include <stdio.h>

int _cont = 0, _quantia;

void main()
{

    //Anuncio do objetivo do programa e entrada de dados
    printf("Digite um valor pra saber em quais cedulas pagar:");
    scanf("%d", &_quantia);

    //Cedulas para pagar o valor dado pelo cliente
    maior100();
}
    

    void maior100(){

        if(_quantia - 100 >= 0){
            _quantia = _quantia - 100;
            _cont++;
            maior100();
        }else{
            printf ("%d notas de 100\n", _cont);
            _cont = 0;
            maior50();
        }
        
    }
    

    void maior50(){
        
        if(_quantia - 50 >= 0){
            _quantia = _quantia - 50;
            _cont++;
            maior50();
        }else{
            printf ("%d notas de 50\n", _cont);
            _cont = 0;
            maior20();
        }
    }
    
    void maior20(){
        
        if(_quantia - 20 >= 0){
            _quantia = _quantia - 20;
            _cont++;
            maior20();
        }else{
            printf ("%d notas de 20\n", _cont);
            _cont = 0;
            maior10();
        }
    
    }

    void maior10(){
        
        if(_quantia - 10 >= 0){
            _quantia = _quantia - 10;
            _cont++;
            maior10();
        }else{
            printf ("%d notas de 10\n", _cont);
            _cont = 0;
            maior5();
    
        }
    
    }

    void maior5(){
        
        if(_quantia - 5 >= 0){
            _quantia = _quantia - 5;
            _cont++;
            maior5();
        }else{
            printf ("%d notas de 5\n", _cont);
            _cont = 0;
            maior2();
    
        }
            
    }
    
    void maior2(){
        
        if(_quantia - 2 >= 0){
            _quantia = _quantia - 2;
            _cont++;
            maior2();
        }else{
            printf ("%d notas de 2\n", _cont);
            _cont = 0;
            maior1();
        }
    }

    void maior1(){
        
        if(_quantia - 1 >= 0){
            _quantia = _quantia - 1;
            _cont++;
            maior1();
        }else{
            printf ("%d notas de 1\n", _cont);
            _cont = 0;
        }
    }