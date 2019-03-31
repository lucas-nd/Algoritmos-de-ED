#include <iostream>
#include "ListaEncadeada.h"
using namespace std;

listaEncadeada::listaEncadeada(){
    head = NULL;
}

void listaEncadeada::imprimir(){
    for(struct No *i = head; i != NULL; i = i->prox){
        cout << i->valor << " ";
    }
}

void listaEncadeada::adicionar(int dado){
    struct No * novo = new (nothrow) No;
    novo->prox = head;
    novo->valor = dado;
    head = novo;
}

int listaEncadeada::tamanho(){
    int count = 0;
    for(struct No *i = head; i != NULL; i = i->prox){
        count++;
    }
    return count;
}

int listaEncadeada::buscar(int dado){
    for(struct No *i = head; i != NULL; i = i->prox){
        if(i->valor == dado){
            return i->valor;
        }
    }
    return -1;
}

void listaEncadeada::remover(int dado){
    struct No * c = head;
    for(int i = 0; i <= tamanho() - 1; i++){
        struct No * aux = c->prox;
        if(aux->valor == dado){
            c->prox = aux->prox;
            delete aux;
            return;
        }
        c = c->prox;
    }
}

void listaEncadeada::destruir(){
    struct No * aux = head;

    head = NULL;

    for(struct No *i = aux; i != NULL; i = i->prox){
        continue;
        delete i;
    }
    
}

struct No * listaEncadeada::buscarNo(int dado){
    for(struct No *i = head; i != NULL; i = i->prox){
        if(i->valor == dado){
            return i;
        }
    }
    return NULL;
}

int listaEncadeada::buscarNoMin(){
    struct No * aux = head;

    for(struct No * i = head; i != NULL; i = i->prox){
        if(aux->valor >= i->valor){
            aux->valor = i->valor;
        }
    }

    return aux->valor;
}

int listaEncadeada::buscarNoMax(){
    struct No * aux = head;

    for(struct No * i = head; i != NULL; i = i->prox){
        if(aux->valor <= i->valor){
            aux->valor = i->valor;
        }
    }

    return aux->valor;
}

void listaEncadeada::concatenar(listaEncadeada lista2){
    for(struct No * i = head; i != NULL; i = i->prox){
        if(i->prox == NULL){
            i->prox = lista2.head;
            return;
        }
    }
}

void listaEncadeada::removerNum(int n){
    struct No * c = head;
    for(int i = 0; i <= tamanho() - 1; i++){
        struct No * aux = c->prox;
        if(i == n-2){
            c->prox = aux->prox;
            delete aux;
            return;
        }
        c = c->prox;
    }
}

void listaEncadeada::removerAll(int dado){
    for(struct No *i = head; i != NULL; i = i->prox){
            remover(dado);
    }
}
