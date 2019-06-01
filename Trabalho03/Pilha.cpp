/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#include <iostream>
#include "Pilha.h"
using namespace std;

/**
 * Implementacao da Pilha usando lista encadeada
 */

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

