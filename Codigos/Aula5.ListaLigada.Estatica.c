/*
Projeto referente a: https://youtu.be/OE3CtV2bGqo
http://each.usp.br/digiampietri/ed/aula05/listaLigada.c
Lista Linear Ligada - Est�tica
 */

#include <stdio.h>

#define MAX 50
#define INVALIDO -1
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
    REGISTRO reg;
    int proxElem;
} ELEMENTO;

typedef struct
{
    ELEMENTO A[MAX];
    int primaElem;      //inicio
    int primaDispon;    //dispo
} LISTA;


void inicializarLista(LISTA* l)
{
    int i;
    for(i=0; i < MAX-1; i++){
        (*l).A[i].prox = i + 1;
    }

    (*l).A[MAX-1].prox = INVALIDO;
    (*l).primaElem = INVALIDO;
    l->primaDispon = 0;

}
void reinicializarLista(LISTA* l)
{
    inicializarLista(&l);
    //  l->nroElem = 0;
}

void exibirLista(LISTA* l)
{
    printf("Lista: \" ");
    int i = (*l).primaElem;
    while(i != INVALIDO){
       printf("%i ", l->A[i].reg.chave);
        i = (*l).A[i].prox;
    }
    printf("\"\n");
}
int tamanho(LISTA* l)
{
    int i = (*l).primaElem;
    int tam =0;
    while(i != INVALIDO){
        tam++;
        i = (*l).A[i].prox;
    }
    return tam;
}

int tamanhoEmBytes(LISTA* l)
{
    return sizeof(LISTA);
}
int obterNo(LISTA* l){
    int resultado = l->primaDispon;
    if(l->primaDispon != INVALIDO)
        l->primaDispon = l->A[l->primaDispon].proxElem;
    return resultado;
}
bool inserirElemListaOrd(LISTA* l, REGISTRO reg)
{
    if((*l).nroElem >= MAX)
        return false;

    int pos = (*l).nroElem;

    while(pos >0 && (*l).A[pos-1].chave > reg.chave)
    {
        (*l).A[pos] = (*l).A[pos-1];
        pos--;
    }
    (*l).A[pos] = reg;
    (*l).nroElem++;
}

int buscaSequencialOrd(LISTA* l, TIPOCHAVE ch)
{
    int i = l->.primaElem;
    while (i != INVALIDO && (*l).A[i].reg.chave < ch)
    {
        i = (*l).A[i].prox;
    }
    if(i != INVALIDO && l->A[i].reg.chave==ch)
    {
        return i;
    }
    return ERRO; // n�o achou
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
            return -1; // n�o achou
        else
            return i;
    }
}
/*
void ordenaLista(Lista* l){
    int i=0;
    while (i > (*l).nroElem)
    {
        (*l).A[i].chave;
        i2 = i++;
        while(i2 > (*l).nroElem){
                if((*l).A[i].chave > (*l).A[i2].chave;){
                    (*l).A[i] = (*l).A[i2];
                }

        }



    }

    for (j = l->nroElem; j > i; j--)
    if((*l).A[j-1] > (*l).A[j]){
         l->A[j] = l->A[j - 1];
    }

    (*l).A[i] = reg;
    (*l).nroElem++;
}
*/
bool excluirElemLista(LISTA* l, TIPOCHAVE ch)
{
    int pos, j;
    pos = BuscaBinaria(l, ch);
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
    REGISTRO reg;
    reg.chave = 9;
    inserirElemListaOrd(&lista, reg);
    reg.chave = 3;
    inserirElemListaOrd(&lista, reg);
    reg.chave = 4;
    inserirElemListaOrd(&lista, reg);
    reg.chave = 1;
    inserirElemListaOrd(&lista, reg);
    reg.chave = 12;
    inserirElemListaOrd(&lista, reg);
    exibirLista(&lista);
    printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
    int numBusca = 1;
    printf("BSent: Chave %i encontrada na posicao: %i do arranjo A.\n",  numBusca,  BuscaBinaria(&lista, numBusca));

    return 0;
}
