#include <stdio.h>

int main(){
      double x = 5000.0, y = 0.0025;
      printf("%f %f %f %f\n\n", x, y, x*y, x/y);
      printf("%e %e %e %e\n\n", x, y, x*y, x/y);
}

/*
Erros:

Para iniciar o tipo da função main não foi
declarado, é necessário acrescentar 'int' ou
outro tipo.

As aspas usadas nos "printfs" não são um as mesmas
aspas duplas que devem ser usadas nos programas.

Explicação de resultados obtidos:

No primeiro pritnf são exibitos os resultados
assim como são anunciados na variável, já no
segundo printf é exibido em notação científica.

*/
