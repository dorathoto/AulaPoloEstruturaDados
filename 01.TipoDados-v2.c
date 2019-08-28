# include <stdio.h> /* Pacotes com funções de entrada e saída */

int main(void)
{
    int a = 2, b = 3;
    float f1= 5, f2 = 3.01;

    printf("%d + %i = %i\n", a, b, a + b);  //%d ou %i são inteiros, %f é float
    printf("%f+ %f = %f\n", f1, f2, f1 + f2);
    return 0; /* Retorna 0, pois `main` retorna um `int` */
}
