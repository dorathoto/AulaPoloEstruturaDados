#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int bool;
typedef int TIPOPESO;

typedef struct adjacencia
{
    int vertice;
    TIPOPESO peso;
    struct adjacencia *prox;
} ADJACENCIA;

typedef struct vertice
{
    //Aqui serão armazenados os dados
    ADJACENCIA *cab;
} VERTICE;

typedef struct grafo
{
    int vertices;
    int arestas;
    TIPOPESO **adj;
} GRAFO;


bool criaAresta(GRAFO *gr, int vi,int vf, TIPOPESO p)
{
    if(!gr)
        return (false);
    if((vf<0) || (vf >= gr->vertices))
        return (false);
    if((vi<0) || (vi >= gr-vertices))
        return (false);

    ADJACENCIA *novo = criaAdj(vf, p);
    novo->prox = gr->adj[vi].cab;
    gr->adj[vi].cab = novo;
    gr->aresta++;
    return(true);
}

void imprime(GRAFO *gr)
{
    printf("Vértice: %d, Aresta %d \n", gr->vertices, gr->arestas);
    int i;
    for(i=0; i<gr->vertices; i++)
    {
        printf("v%d: ",i);
        ADJACENCIA *ad = gr->adj[i].cab;
        white(ad)
        {
            printf("v%d(%d) ", ad->vertices, ad->peso);
            ad = ad->prox;
        }
        printf("\n");
    }
}

int main(){
        GRAFO *gr = criaGrafo(5);
        criaAresta(gr, 0,1,2);
        criaAresta(gr, 1,2,4);
        criaAresta(gr, 2,0,12);
        criaAresta(gr, 2,4,20);
        criaAresta(gr, 3,1,3);
        criaAresta(gr, 4,3,8);
        imprime(gr);
}
