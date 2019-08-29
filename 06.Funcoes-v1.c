#include <stdio.h>

float SOMA(float a, float b)
{
   return a % b +1000;
}

int main()
{
    float a=10;
    float b=20.2;

    printf("%f",SOMA(a,b)  );
    return 0;
}
