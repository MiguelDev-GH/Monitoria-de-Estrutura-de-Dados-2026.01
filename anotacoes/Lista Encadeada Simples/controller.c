#include "view.h"

Lista* criarLista(){
    Lista *li = malloc(sizeof(Lista));
    if(li != NULL) *li = NULL;
    return li;
}

void inserirElementoNaLista(Lista* li, int valor){
    if(li == NULL) return;

    No* novo = malloc(sizeof(No));
    novo->valor = valor;

    if(*li == NULL){
        *li = novo;
    } else {
        No* aux = *li;
        while(aux->prox != NULL) 
            aux = aux->prox;

        aux->prox = novo;
    }

}

void removerUltimoDaLista(Lista* li){
    if(li == NULL || *li == NULL) return;

    if((*li)->prox == NULL){
        No* remover = *li;
        *li = NULL;
        free(remover);
    }

    No* aux = *li;

    while(aux->prox->prox != NULL){
        aux = aux->prox;
    }

    No* remover = aux->prox;
    aux->prox = NULL;

    free(remover);
}

int tamanhoLista(Lista* li){
    if(li == NULL) return 0;

    No* aux = *li;

    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }

    return cont;
}

void imprimirLista(Lista* li){
    if (li == NULL){
        printf("Lista inválida");
        return;
    } else if (*li == NULL) {
        printf("Lista vazia");
        return;
    } 

    No* aux = *li;

    while(aux != NULL){
        printf(" %d ->",aux->valor);
        aux = aux->prox;
    }

    printf(" NULL\n");

}