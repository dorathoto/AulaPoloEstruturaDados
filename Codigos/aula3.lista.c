/*
Projeto referente a: https://youtu.be/g_nbG7L5ou0
Lista Linear Sequencial
Diferença entre '.' e '->'
https://pt.stackoverflow.com/questions/51180/diferen%C3%A7a-real-entre-operador-ponto-e-operador-seta-em-c
(*l).nroElem ou (l->.nroElem) //duas formas de referenciar o ponteiro
 */

#include <stdio.h>

#define MAX 50
#define ERRO -1
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct
{
    TIPOCHAVE chave;
} REGISTRO;

typedef struct
{
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

//recebe o endereço da estrutura original
void inicializarLista(LISTA* l)
{
    (*l).nroElem = 0;
    //l->nroElem=0; //mesmo coisa do elemento acima.
}
void reinicializarLista(LISTA* l)
{
    inicializarLista(&l);
  //  l->nroElem = 0;
}

void exibirLista(LISTA* l)
{
    int i;
    printf("Lista: \" ");
    for (i = 0; i < l->nroElem; i++)
        printf("%i ", l->A[i].chave); // só lembrando TIPOCHAVE = int
    printf("\"\n");
}
int tamanho(LISTA* l)
{
    //  return l->nroElem;
    return (*l).nroElem;
}

int tamanhoEmBytes(LISTA* l)
{
    return sizeof(LISTA);
}
bool inserirElemLista(LISTA* l, REGISTRO reg, int i)
{
    int j;
    if ((l->nroElem >= MAX) || (i < 0) || (i > l->nroElem))
        return (false); // lista cheia ou índice inválido
    for (j = l->nroElem; j > i; j--)
        l->A[j] = l->A[j - 1];
    (*l).A[i] = reg;
    (*l).nroElem++;
    return true;
}


int buscaSequencial(LISTA* l, TIPOCHAVE ch)
{
    int i = 0;
    while (i < l->nroElem)
    {
        if (ch == l->A[i].chave)
            return i; // achou
        else
            i++;
    }
    return ERRO; // não achou
}
int buscaSentinela(LISTA* l, TIPOCHAVE ch)
{
    int i = 0;
    (*l).A[(*l).nroElem].chave = ch;
    //l->A[l->nroElem].chave = ch; // sentinela
    while (l->A[i].chave != ch)
    {
        i++;
        if (i > l->nroElem - 1)
            return -1; // não achou
        else
            return i;
    }
}


bool excluirElemLista(LISTA* l, TIPOCHAVE ch)
{
    int pos, j;
    pos = buscaSequencial(l, ch);
    if (pos == ERRO)
        return false; // não existe
    for (j = pos; j < l->nroElem - 1; j++)
        l->A[j] = l->A[j + 1];
    l->nroElem--;
    return true;
}
int main()
{
    LISTA lista;
    inicializarLista(&lista);
    exibirLista(&lista);
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
    REGISTRO reg;
    reg.chave = 9;
    inserirElemLista(&lista, reg, 0);
    exibirLista(&lista);
    reg.chave = 3;
    inserirElemLista(&lista, reg, 1);
    reg.chave = 4;
    inserirElemLista(&lista, reg, 2);
    reg.chave = 1;
    inserirElemLista(&lista, reg, 3);
    reg.chave = 12;
    inserirElemLista(&lista, reg, 2);
    exibirLista(&lista);
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
    printf("BSeq: Chave 4 encontrada na posicao: %i do arranjo A.\n", buscaSequencial(&lista, 4));
    printf("BSent: Chave 4 encontrada na posicao: %i do arranjo A.\n", buscaSentinela(&lista, 4));
    if (excluirElemLista(&lista, 4))
        printf("Exclusao bem sucedida: 4.\n");
    if (excluirElemLista(&lista, 8))
        printf("Exclusao bem sucedida: 8.\n");
    if (excluirElemLista(&lista, 9))
        printf("Exclusao bem sucedida: 9.\n");
    exibirLista(&lista);
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
    reinicializarLista(&lista);
    exibirLista(&lista);
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
    return 0;
}
