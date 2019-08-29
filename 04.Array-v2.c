#include<stdio.h>

int main(void)
{
    float notas[5] = {7, 8, 9, 9, 5.2};
    // declarando e inicializando o vetor notas

    printf("Exibindo os Valores do Vetor \n\n");
    int i;
    for( i = 0 ; i <= 4; i++)
    {
        printf("notas[%i] = %.1f\n",i, notas[i]);
    }


    return 0;
}
