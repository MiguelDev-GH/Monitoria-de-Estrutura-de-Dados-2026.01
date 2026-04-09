#include "controller.c"

int main(){

    Lista* li = criarLista();

    inserirElementoNaLista(li,1);
    inserirElementoNaLista(li,2);
    inserirElementoNaLista(li,3);
    inserirElementoNaLista(li,4);

    printf("-----| Lista Encadeada Simples |-----\n\n");

    imprimirLista(li);
    printf("Tamanho da Lista: %d\n",tamanhoLista(li));

    printf("\n> Agora vou remover o ultimo elemento! \n\n");

    removerUltimoDaLista(li);

    imprimirLista(li);
    printf("Tamanho da Lista: %d\n",tamanhoLista(li));

    return 0;
}