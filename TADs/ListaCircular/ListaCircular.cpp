#include <iostream>
#include "ListaCircular.h"
using namespace std;

struct No * lcircular_criar(){
    return NULL;
}

struct No * lcircular_adicionar(struct No * inicial, int dado){
    struct No * novo = new struct No;
    novo->valor = dado;
    if(inicial == NULL) // lista vazia
        novo ->prox = novo;
    else {
        novo ->prox = inicial ->prox;
        inicial ->prox = novo;
    }
    return novo;
}

void lcircular_imprimir(struct No * inicial){
    if (inicial == NULL) return;

    struct No * aux = inicial;
    do{
        cout << aux->valor << " ";
        aux = aux->prox;
    }while(aux != inicial);
}