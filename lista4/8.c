#include <stdio.h>

int mdc(int num1, int num2, int resto){
    resto = num1 % num2;
    num1 = num2;
    num2 = resto;

    if((num1%num2) != 0)
          resto = mdc(num1, num2 , resto);
    else
        return resto;
}

int main(){
  int num1, num2, resto;

  scanf("%d %d", &num1, &num2 );

  resto = mdc(num1, num2 , resto);

  printf("%d\n", resto);

  return 0;
}
