#include <stdio.h>
int main()
{
    printf("Loop por While");
    int count=1;
    while (count <= 4)
    {
    printf("%i ", count);
    count++;    //contador aqui dentro
    }

    printf("Loop por For\n");
    int i;
    for (i=1; i<=4; i++)    //contador já na sintaxe
    {
    printf("%d ", i);
    }
    return 0;
}
