#include <stdio.h>

#define ICMS 0.18;
int main(void)
{
    float preco_produto=97, valor_icms;

    /*
    printf("Informe o valor do produto: " );
    scanf("%f", &preco_produto);    //Exemplo de input
    */
    valor_icms = preco_produto * ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f",valor_icms );
    return 0;
}
