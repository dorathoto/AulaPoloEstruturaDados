#include<stdio.h>

int main(void)
{
    float notas[5] = {7, 8, 9, 9, 2.2};
    // declarando e inicializando o vetor notas
    /*
    Array sempre come�a pelo �ndice 0,
    Exemplo o array acima cont�m 5 elementos e vai do �ndice 0 a 4
    */
    printf("Exibindo os Valores do Vetor \n\n");
    printf("notas[0] = %f\n", notas[0]);        //Definir casas decimais na exibi��o
    printf("notas[1] = %.1f\n", notas[1]);
    printf("notas[2] = %.1f\n", notas[2]);
    printf("notas[3] = %.1f\n", notas[3]);
    printf("notas[4] = %.1f\n", notas[4]);

    getch();
    return 0;
}
