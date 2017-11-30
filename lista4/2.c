#include <stdio.h>

void pares(int a, int b){
  for(a; a < b; a ++)
    if( (a % 2) == 0 )
      printf("%d ", a);

  printf("n");

}

int main(){

  int a, b;

  scanf("%d %d", &a, &b);

  pares(a, b);

  return 0;

}
