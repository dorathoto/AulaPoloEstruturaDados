/*
explicar:
- Ponteiros em linguagens modernas;
- Tipo por referencia e valor;
- Desenhar mapa da memória;
*/
#include <stdio.h>

int main(void)
{
    //valor é a variável que
    //será apontada pelo ponteiro
    int valor = 27;
    //int x = valor;

    //declaração de variável ponteiro
    int *ptr;

    //atribuindo o endereço da variável valor ao ponteiro
    ptr = &valor;

    valor =3; //mudando o valor final todos os ponteiros serão modificados
    //printf("valor de x %i\n", x);
    printf ("Utilizando ponteiros\n\n");
    printf ("Conteudo da variavel valor: %d \n", valor);
    printf ("Endereço da variavel valor: %x \n", &valor);
    printf ("Endereço por %%p: %p\n", ptr);
    printf ("Conteudo da variavel ponteiro ptr: %x\n", ptr);


    getch();
    return(0);
}
