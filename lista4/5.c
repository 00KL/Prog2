#include <stdio.h>

void fatorial(int a){
  int fatorial = 1;

  for (int i = 1; i <= a; i++)
    fatorial *= i;

  printf("%d \n", fatorial);
}

int main(){
  int num;

  do{
    scanf("%d", &num);
  }while(num < 0);

  fatorial(num);

  return 0;
}
