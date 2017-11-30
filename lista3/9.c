#include <stdio.h>

int main()
{
    //Variaveis
    int primeiro, ultimo, metade, primo = 0, i;

    scanf("%d %d", &primeiro, &ultimo);

   for(primeiro++; primeiro < ultimo ; primeiro ++){


     if( (primeiro % 2) != 0){
        for( i = 2 ; i < primeiro ; i++){
          if((primeiro % i == 0) && (primeiro != i)){
            primo = 1;
          }
         }
         if(primo == 0){
           printf("%d ", primeiro );
         }
         primo = 0;

      }


    }

    printf("\n" );

    return 0;
}
