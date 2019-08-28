#include <stdio.h>

int main(void)
{
    typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
    {
        float Peso;   // define o campo Peso
        int Idade;    // define o campo Idade
        float Altura; // define o campo Altura
    } Pessoa;



    Pessoa Joao, P1, P2;
    Pessoa Povo[4]; //Conceito de Array


    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    printf("Idade: %d  Peso: %f Altura: %f\n", Joao.Idade, Joao.Peso, Joao.Altura);
    printf("\n=====================================");


    Povo[0].Idade = 23;
    Povo[0].Peso = 75.3;
    Povo[0].Altura = 1.89;
    printf("\nImprimindo pessoa.: %d", 0);
    printf("\nIdade: %d  Peso: %f Altura: %f\n", Povo[0].Idade, Povo[0].Peso, Povo[0].Altura);
    printf("\n");

    Povo[1].Idade = 23;
    Povo[1].Peso = 75.3 ;
    Povo[1].Altura = 1.89;
    printf("\nImprimindo pessoa.: %d", 1);
    printf("\nIdade: %d  Peso: %f Altura: %f\n", Povo[1].Idade, Povo[1].Peso, Povo[1].Altura);
    printf("\n");

    Povo[2].Idade = 23;
    Povo[2].Peso = 75.3;
    Povo[2].Altura = 1.89;
    printf("\nImprimindo pessoa.: %d", 2);
    printf("\nIdade: %d  Peso: %f Altura: %f\n", Povo[2].Idade, Povo[2].Peso, Povo[2].Altura);
    printf("\n");

    return(0);
}
