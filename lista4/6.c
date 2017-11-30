#include <stdio.h>

void fatora(int num, int fatorial, int aux){

  if(aux > num){
    printf("%d \n", fatorial);
  }

  else{
    fatorial *= aux;
    aux++;
    fatora(num, fatorial, aux);
  }
}

int main(){
  int num, fatorial = 1, aux = 1;

  do{
    scanf("%d", &num);
  }while(num < 0);

  fatora(num, fatorial, aux);

  return 0;
}
