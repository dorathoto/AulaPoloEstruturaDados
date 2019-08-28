#include<conio.h>
#include<stdio.h>

int main()
{
    char ch;
    ch = 0;

    while (ch !='A')
    {
        ch = getche();
    }
    getch();

    int i=0;

    printf("\nLoop por Do.While, sempre executa 1 vez\n");
    do
    {
        i++;
        printf("%d\n", i);
    }
    while(i <= 0);

    getch();
}
