#include <stdio.h>

int main(void)
{
    typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
    {
        float Peso;   // define o campo Peso
        int Idade;    // define o campo Idade
        float Altura; // define o campo Altura
    } Pessoa;



    Pessoa Povo[999];


    int i;
    for(i=0; i< 414; i++){
        Povo[i].Idade = 23 + i;
        Povo[i].Peso = 75.3 +i ;
        Povo[i].Altura = 1.89;

        printf("\nImprimindo pessoa.: %d", i);
        printf("\nIdade: %d  Peso: %f Altura: %f\n", Povo[i].Idade, Povo[i].Peso, Povo[i].Altura);
    }


    return(0);
}
