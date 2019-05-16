/**
 * Implementacao de Fila usando lista encadeada
 */
#include <iostream>
#include "Fila.h"
using namespace std;

/**
 * Construtor
 */
Fila::Fila () {
    _ini = _fim = NULL;
    _tamanho = 0;
}

/**
 * A função 'fila_inserir' insere um novo elemento na fila
 * Cada novo elemento inserido no fim da fila
 */
void Fila::enfileirar (void* v) {
    NoFila *novo = new NoFila;
    novo->dado = v;
    novo->prox = NULL;  // novo no passa a ser o ultimo
    if (_fim != NULL) // verifica se fila nao estava vazia
        _fim->prox = novo;
    else    // fila estava vazia
        _ini = novo;
    _fim = novo;
    _tamanho++;
}

/**
 * Funcao desenfileirar
 * Supoe que a fila nao esta vazia
 */
void* Fila::desenfileirar () {
    NoFila *aux;
    void* v;
    aux = _ini;
    v = aux->dado;
    _ini = aux->prox;
    // verifica se a fila ficou vazia
    if (_ini == NULL) 
        _fim = NULL;
    delete aux;
    _tamanho--;
    return v;
}

int Fila::tamanho () {
    return _tamanho;
}

bool Fila::vazia () {
    return _ini == NULL;
}

// Supoe que a fila nao esta vazia
void* Fila::cabeca () {
    return _ini->dado;
}

// Supoe que a fila nao esta vazia
void* Fila::cauda () {
    return _fim->dado;
}

// Destrutor
Fila::~Fila () {
    while (_ini != NULL) {
        NoFila *temp = _ini;
        _ini = _ini->prox;
        delete temp;
    }
    _fim = NULL;
}