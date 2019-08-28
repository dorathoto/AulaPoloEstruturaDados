#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa;


void AdicionaIdade(Pessoa* p, int idade)
{
    p->Idade = idade;
}

void AdicionaPessoaCompleta(Pessoa* p, int age, float peso, float alt)
{
    p->Idade = age;
    p->Peso = peso;
    p->Altura = alt;
}

int main(void)
{
    Pessoa P1;

    AdicionaIdade(&P1, 15);
    printf("Idade: %d  Peso: %.f Altura: %f\n", P1.Idade, P1.Peso, P1.Altura);

    Pessoa P2;
    AdicionaPessoaCompleta(&P2, 20, 65.5, 1.6); // enviando a referencia &
    printf("Idade: %d  Peso: %.2f Altura: %f\n", P2.Idade, P2.Peso, P2.Altura);
    return(0);
}
