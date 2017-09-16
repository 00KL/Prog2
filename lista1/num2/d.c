#include <stdio.h>

int main()
{
    //Variáveis
    float ponto[2], centro[2], raio;
    
    //Anunciando os valores estipulados na questão
    ponto[0] = 1;
    ponto[1] = 2;
    centro[0] = 3;
    centro[1] = 3;
    raio = 3;
    

    //Checagem de posição do ponto e exibição de resposta 
    //positiva
    if(     ponto[0] <= centro[0]+raio 
        &&  ponto[1] <= centro[1]+raio)
        {
            printf("O ponto (%0.0f,%0.0f) pertence ao circulo de raio %0.0f e centro (%0.0f,%0.0f).\n",
            ponto[0], ponto[1],raio, centro[0], centro[1]);
        }
        

    //respota negativa
    else 
    {
        printf("O ponto (%0.0f,%0.0f) nao pertence ao circulo de raio %0.0f e centro (%0.0f,%0.0f).\n",
        ponto[0], ponto[1], raio, centro[0], centro[1]);
    }
    
    return 0;

}

//Fiz essa função para a possibilidade de qualquer ponto
//porém considerando que a questão somente exigia a checagem
//referente a números previamente estabelicidos julguei melhor
//deixar somente o objetivo da função ser satisfeito porém não
//descartei o código avaixo que está 100% funcional.
int testes()
{
    //Variáveis
    float ponto[2], centro[2], raio;
    
    //Anunciando o objetivo da função e entrada de dados
    
    //Entrada do ponto
    printf("Digite um ponto:");
    scanf("%f%f", &ponto[0], &ponto[1]);

    //Entrada do raio da Circuferência
    printf("Digite o Raio da circuferência: ");
    scanf("%f", &raio);

    //Entrada do centro da circuferência
    printf("Digite o centro da circunferência: ");
    scanf("%f%f", &centro[0], &centro[1]);

    //Checagem de posição do ponto e exibição de resposta 
    //positiva
    if(     ponto[0] <= centro[0]+raio 
        &&  ponto[1] <= centro[1]+raio)
        {
            printf("O ponto (%0.0f,%0.0f) pertence ao circulo de raio %0.0f e centro (%0.0f,%0.0f).\n",
            ponto[0], ponto[1],raio, centro[0], centro[1]);
        }
        

    //respota negativa
    else 
    {
        printf("O ponto (%0.0f,%0.0f) nao pertence ao circulo de raio %0.0f e centro (%0.0f,%0.0f).\n",
        ponto[0], ponto[1], raio, centro[0], centro[1]);
    }
    
    return 0;
}