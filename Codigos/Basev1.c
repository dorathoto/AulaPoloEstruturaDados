#include <stdio.h>
#include <malloc.h>

#define alturaMaxima 225

typedef struct
{
    int peso;
    int altura;
} PesoAltura;

int main()
{
    int x;
    PesoAltura* pessoa1;
    printf("Valor inicial do endereco: %p\n", pessoa1);
    pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
    //será exibido com sujeira
    printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
    pessoa1->peso = 81; // como é ponteiro é seta ao invés de ponto
    pessoa1->altura = 185;

    printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
    if (pessoa1->altura>alturaMaxima)
    {
        printf("Altura acima da maxima.\n");
    }
    else
        printf("Altura abaixo da maxima.\n");

    printf("Enderecos: %p %p %p\n", &x, &pessoa1, &pessoa1);

    return 0;
}
