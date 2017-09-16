#include <stdio.h>

int main(){
  int i = 12345;
  float x = 45.678;
  printf("%20d %5d %8d \n\n", i, i, i);
  printf("%6.2f %10f %13f %2.4f\n\n", x, x, x, x);
  printf("%3e %10f \n\n", x, x);
}

/*
Erros:
Para iniciar o tipo da função main não foi
declarado, é necessário acrescentar 'int' ou
outro tipo.

As aspas usadas nos "printfs" não são um as mesmas
aspas duplas que devem ser usadas nos programas.

No primeiro printf o "%f" não está fazendo
referencia a nenhuma variável.
asdfdfgfg
Novamente no último printf o "%13e" não está
fazendo referência a nenhuma variável.

Explicação dos resultados:
No primeiro printf se solicita, atravez do
%n, o n número de algarismos q o número irá ocupar.

No segundo printf se solicita, atravez do
%n.k, n numeros de algorismos q o número irá
ocupar e o k número de casas decimais q o
número ira coupar
*/
