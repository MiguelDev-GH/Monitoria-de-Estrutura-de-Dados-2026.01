#include "controller.c"

int main(){

    Lista* li = criarLista();

    inserirElementoNaLista(li, 1);
    inserirElementoNaLista(li, 2);
    inserirElementoNaLista(li, 3);

    printf("-----| Lista Duplamente Simples |-----\n\n");

    imprimirLista(li);

    // Vou imprimir o anterior do elemento 2

    //                        V - Aqui, acesso o 1    
    //                        v     V - Aqui, é o 2
    //                        v     v     V - Aqui, é o anterior do 2
    int valorAnteriorDo2 = (*li)->prox->ante->valor;

    printf("Anterior do 2: %d\n", valorAnteriorDo2);

    printf("\n");

    free(li);

    return 0;
}