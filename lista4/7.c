#include <stdio.h>

int main(){
  int num1, num2, resto;

  scanf("%d %d", &num1, &num2 );

  while((num1%num2) != 0){
      resto = num1 % num2;
      num1 = num2;
      num2 = resto;
  }

  printf("%d\n", resto);

  return 0;
}
