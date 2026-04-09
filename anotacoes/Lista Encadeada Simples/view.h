#ifndef VIEW_H
#define VIEW_H

#include <stdio.h>
#include <stdlib.h>

#ifndef _WIN64
    #define LIMPAR "clear"
#else
    #define LIMPAR "cls"
#endif

#define limpar system(LIMPAR);

void limpar_buffer();

typedef struct No {
    int valor;
    struct No* prox; 
} No;

typedef struct No* Lista;

Lista* criarLista();
void inserirElementoNaLista();
void imprimirLista();
int tamanhoLista();


#endif