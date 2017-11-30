#include <stdio.h>

void palindromo(int num, int numb){
  int reconstrucao = 0, dezenas = 1, nao = 1;

  while(num > 0){
    reconstrucao += (num % 10) * dezenas;
    num = num / 10;
    dezenas *= 10;
    if(numb == reconstrucao){
      printf("Sim \n");
      nao = 0;
    }
  }

  if(nao == 1){
    printf("Nao \n" );
  }

}

int main(){
  int num, numb;

  scanf("%d %d", &num, &numb );

  palindromo(num, numb);

  return 0;
}
