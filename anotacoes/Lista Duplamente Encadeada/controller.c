#include "view.h"

Lista* criarLista(){
    Lista *li = malloc(sizeof(Lista));
    if(li != NULL) *li = NULL;
    return li;
}

void inserirElementoNaLista(Lista* li, int valor){
    if(li == NULL) return;

    No* novo = malloc(sizeof(No));
    if(novo == NULL) return;
    novo->valor = valor;
    novo->prox = NULL;

    if(*li == NULL){ 
        *li = novo;
        novo->ante = NULL;
    } else {

        No* aux = *li;

        while(aux->prox != NULL){
            aux = aux->prox;
        }

        aux->prox = novo;
        novo->ante = aux;
    }
}

void removerUltimoDaLista(Lista* li){
    if(li == NULL || *li == NULL) return;

    if((*li)->prox == NULL){
        No* remover = *li;
        *li = NULL;
        free(remover);
        return;
    }

    No* aux = *li;

    while(aux->prox->prox != NULL){
        aux = aux->prox;
    }

    No* remover = aux->prox;
    aux->prox = NULL;

    free(remover);
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