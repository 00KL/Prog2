#include <stdio.h>

int main ()
{
  //Variaveis
  int pontoDoRetangulo1[2], pontoDoRetangulo2[2], ponto[2];

  //Entrada de dados e anuncio do objetivo do programa
  printf("Digite dois pontos opostos do retangulo e um ponto para saber se faz parte do retangulo: \n" );
  scanf("%d%d %d%d %d%d", &pontoDoRetangulo1[0], &pontoDoRetangulo1[1],
                          &pontoDoRetangulo2[0], &pontoDoRetangulo2[1],
                          &ponto[0], &ponto[1] );



  //Verificação da posição do retangulo
  
  //Primeira mente se compara qual dos X dos pontos do retangulo dado é o menor
  //para fins de comparação
  if(pontoDoRetangulo1[0]<pontoDoRetangulo2[0]){

    //Sabendo qual e o menor se verifica se o ponto que deve ser checado
    //tem um X que se enquadre entre os o menor e o maior do rentagulo
    if(ponto[0] > pontoDoRetangulo1[0] && ponto[0] < pontoDoRetangulo2[0]){

      //Com essa inforamção se verifica qual é o menor Y dos pontos
      //do rentangulo.
      if(pontoDoRetangulo1[1] < pontoDoRetangulo2[1]){

        //Para em seguida se saber se o ponto em questão está na altura ideal
        //para fazer parte do retangulo
        if(ponto[1] > pontoDoRetangulo1[1] && ponto[1] < pontoDoRetangulo2[1])

          printf("Dentro\n");

        else

          printf("Fora\n");
      }

      //Para em seguida se saber se o ponto em questão está na altura ideal
      //para fazer parte do retangulo
      else{

        //Para em seguida se saber se o ponto em questão está na altura ideal
        //para fazer parte do retangulo
        if(ponto[1] < pontoDoRetangulo1[1] && ponto[1] > pontoDoRetangulo2[1])

          printf("Dentro\n");

        else
          printf("Fora\n");
      }
    }
    
    else
      printf("Fora\n");
  }


  

  //Caso o X do primeiro ponto do retangulo digitado seja maior  
  else   
  {   
    //Sabendo qual e o menor se verifica se o ponto que deve ser checado
    //tem um X que se enquadre entre os o menor e o maior do rentagulo
    if(ponto[0] < pontoDoRetangulo1[0] && ponto[0] > pontoDoRetangulo2[0]){
    
      //Com essa inforamção se verifica qual é o menor Y dos pontos
      //do rentangulo.
      if(pontoDoRetangulo1[1] < pontoDoRetangulo2[1]){
    
        //Para em seguida se saber se o ponto em questão está na altura ideal
        //para fazer parte do retangulo
        if(ponto[1] > pontoDoRetangulo1[1] && ponto[1] < pontoDoRetangulo2[1])
    
          printf("Dentro\n");
    
          else
    
          printf("Fora\n");
        }
    
        //Para em seguida se saber se o ponto em questão está na altura ideal
        //para fazer parte do retangulo
        else{
    
          //Para em seguida se saber se o ponto em questão está na altura ideal
          //para fazer parte do retangulo
          if(ponto[1] < pontoDoRetangulo1[1] && ponto[1] > pontoDoRetangulo2[1])
    
            printf("Dentro\n");
    
          else
            printf("Fora\n");
        }
      }
        
    else
       printf("Fora\n");
  }

}
