#include <stdio.h>

float SOMA(float a, float b)
{
   return a + b;
}

int main()
{
    float a=10;
    float b=20.2;
    float resultado;
    resultado = SOMA(a,b);  // Chamada da função SOMA(12.3,10);
    printf("A soma de %.2f com %.2f = %.2f", a,b,resultado);
    return 0;
}
