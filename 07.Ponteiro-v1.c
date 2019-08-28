/*
explicar:
- Ponteiros em linguagens modernas;
- Tipo por referencia e valor;
- Desenhar mapa da mem�ria;
*/
#include <stdio.h>

int main(void)
{
    //valor � a vari�vel que
    //ser� apontada pelo ponteiro
    int valor = 27;
    //int x = valor;

    //declara��o de vari�vel ponteiro
    int *ptr;

    //atribuindo o endere�o da vari�vel valor ao ponteiro
    ptr = &valor;

    valor =3; //mudando o valor final todos os ponteiros ser�o modificados
    //printf("valor de x %i\n", x);
    printf ("Utilizando ponteiros\n\n");
    printf ("Conteudo da variavel valor: %d \n", valor);
    printf ("Endere�o da variavel valor: %x \n", &valor);
    printf ("Endere�o por %%p: %p\n", ptr);
    printf ("Conteudo da variavel ponteiro ptr: %x\n", ptr);


    getch();
    return(0);
}
