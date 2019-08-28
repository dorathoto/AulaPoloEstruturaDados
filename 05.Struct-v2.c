#include <stdio.h>
#include <conio.h>
int main(void)
{
    typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
    {
        float Peso;   // define o campo Peso
        int Idade;    // define o campo Idade
        float Altura; // define o campo Altura
    } Pessoa;



    Pessoa Joao, P1, P2;
    Pessoa Povo[4];


    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    printf("Idade: %d  Peso: %f Altura: %f\n", Joao.Idade, Joao.Peso, Joao.Altura);
    printf("\n=====================================");

    int i;
    for(i=0; i< 4; i++){
        Povo[i].Idade = 23 + i;
        Povo[i].Peso = 75.3 +i ;
        Povo[i].Altura = 1.89;

        printf("\nImprimindo pessoa.: %d", i);
        printf("\nIdade: %d  Peso: %f Altura: %f\n", Povo[i].Idade, Povo[i].Peso, Povo[i].Altura);
        printf("\n");
    }


    return(0);
}
