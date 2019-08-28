#include <stdio.h>

#define alturaMaxima  225   //Constante em C

typedef struct{
    int peso;
    int altura;
} PesoAltura;

int main(){
    int x;
    PesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;
    printf("Peso: %i, Altura %i\n", pessoa1.peso, pessoa1.altura);

    if(pessoa1.altura>alturaMaxima) printf("Altura acima da maxima \n");
    else printf("Altura abaixo da maxima \n");

    printf("Enderecos: %p %p %p %p\n", &x, &pessoa1, pessoa1, pessoa1.peso);
    return 0;
}
