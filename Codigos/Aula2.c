#include <stdio.h>
#include <malloc.h>

int main() {
    int* y = (int*) malloc(sizeof(int)); //variavel y do tipo ponteiro, alloca um inteiro de espaço (int*) é um cast
    *y = 20;    //defini valor 20
    int z = sizeof(*y);
    printf("*y=%i z=%i\n", *y, z);

    return 0;

}
