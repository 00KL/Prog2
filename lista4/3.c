#include <stdio.h>

int palindromo(int num){
  int contrario = 0;

  while(num > 0){
    contrario *= 10;
    contrario += num % 10;
    num = num / 10;
  }

  return contrario;

}

int main(){
  int num;

  scanf("%d", &num);

  if(num < 0)
    num *= -1;

  if(num == palindromo(num))
    printf("E palindromo. \n" );
  else
    printf("Nao e palindromo. \n");

  return 0;
}
