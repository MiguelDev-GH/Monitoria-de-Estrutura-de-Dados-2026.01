#include "controller.c"

int main(){

    Lista* li = criarLista();

    inserirElementoNaLista(li, 1);
    inserirElementoNaLista(li, 2);
    inserirElementoNaLista(li, 3);

    printf("-----| Lista Duplamente Simples |-----\n\n");

    imprimirLista(li);

    printf("\n");

    free(li);

    return 0;
}