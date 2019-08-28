/*
Projeto referente a: https://youtu.be/g_nbG7L5ou0
Lista Linear Sequencial
DiferenÃ§a entre '.' e '->'
https://pt.stackoverflow.com/questions/51180/diferen%C3%A7a-real-entre-operador-ponto-e-operador-seta-em-c
(*l).nroElem versus (l->.nroElem)
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

//recebe o endereÃ§o da estrutura original
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
        printf("%i ", l->A[i].chave); // sÃ³ lembrando TIPOCHAVE = int
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
        return (false); // lista cheia ou Ã­ndice invÃ¡lido
    for (j = l->nroElem; j > i; j--)
        l->A[j] = l->A[j - 1];
    (*l).A[i] = reg;
    (*l).nroElem++;
    return true;
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

int BuscaBinaria(LISTA* l, TIPOCHAVE ch)
{
    int esq, meio, dir;
    esq=0;
    dir = (*l).nroElem-1;
    while(esq <= dir)
    {
        meio = ((esq+dir)/2);
        if((*l).A[meio].chave == ch)
        {
            return meio;	//ponto de saida único
        }
        else
        {
            if((*l).A[meio].chave > ch)
            {
                dir = meio -1;
            }
            else
            {
                esq = meio +1;
            }
        }
    }
    return -1;
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
        return false; // nÃ£o existe
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
