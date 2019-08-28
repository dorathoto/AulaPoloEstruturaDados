#include <stdio.h>

int main()
{
    int x =25;
    int* y = &x;

    *y = 30;

    printf("1. Valor atual de x: %i\n",x);
    //*y = 30;
    printf("2. Valor atual de x: %i\n",x);

    return 0;
}
