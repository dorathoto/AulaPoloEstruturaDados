# include <stdio.h> /* Pacotes com funções de entrada e saída */

int main(void)
{
    printf("\nTamanho de um char =%lu bytes",sizeof(char));
    printf("\nTamanho de um unsigned char =%lu bytes",sizeof(unsigned char));
    printf("\nTamanho de um void =%lu bytes",sizeof(void));
    printf("\n");
    printf("\nint.: de -2.147.483.648 a 2.147.483.647");
    printf("\n      Tamanho de um int = %lu bytes",sizeof(int));
    printf("\nUnsigned int.: de 0 a 4.294.967.295");
    printf("\n      Tamanho de um unsigned int = %lu bytes",sizeof(unsigned int));
    printf("\nShort int.: de -32.768 a 32.767");
    printf("\n      Tamanho de um short int = %lu bytes",sizeof(short int));

    return 0; /* Retorna 0, pois `main` retorna um `int` */
}
