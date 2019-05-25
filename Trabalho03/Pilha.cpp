/**
 * Implementacao da Pilha usando lista encadeada
 */
#include <iostream>
#include "Pilha.h"
using namespace std;

Pilha::Pilha() {
    _top = NULL;
}

Pilha::~Pilha() {
    while (_top != NULL) {
        NoPilha* temp = _top;
        _top = _top->prox;
        delete temp;
    }
}

bool Pilha::isEmpty() {
    return _top == NULL;
}

void Pilha::push(void* v) {
    NoPilha* novo = new NoPilha;
    novo->dado = v;
    novo->prox = _top;
    _top = novo;
}

void* Pilha::pop() { // supoe que a pilha nao esta vazia
    NoPilha* aux = _top;
    void* v = aux->dado;
    _top = aux->prox;
    delete aux;
    return v;
}

void* Pilha::top() {
    return _top->dado; // supoe que a pilha nao esta vazia
}

