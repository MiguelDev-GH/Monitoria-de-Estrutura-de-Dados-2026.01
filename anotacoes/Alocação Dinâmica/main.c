#include <stdio.h>
#include <stdlib.h>

int main(){


    // Aloca espaço para 4 inteiros
    // Com lixo na memória
    int *a = malloc(4 * sizeof(int));

    a[0] = 2;
    a[1] = 0;
    a[2] = 2;
    a[3] = 6;

    // Aloca espaço para 4 inteiros, igual o malloc
    // Mas todos os lugares se iniciam com 0;
    int *b = calloc(4,sizeof(int));

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;

    // Alterando o espaço de A para 8 INTEIROS
    a = realloc(a, 8 * sizeof(int));

    // Alterando o espaço de A para 2 INTEIROS
    a = realloc(a, 2 * sizeof(int));

    // Realloc pode ser usado: 
    // - tanto para menos espaço...
    // + quanto para mais espaço

    free(a);
    free(b);


    return 0;

}