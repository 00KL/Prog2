#include <stdio.h>

void menor(){
  int vetor[5];

  for(int i = 0; i<5; i++){
    scanf("%d", &vetor[i]);
  }

  int menor = vetor[0];

  for(int i = 1; i < 5; i++){

    if(vetor[i] < menor){
        menor = vetor[i];
    }
  }

  printf("%d \n", menor );
}

int main(){

  int escolha;

  scanf("%d", &escolha);

  switch (escolha) {
    case 1: menor();
  }

return 0;
}
