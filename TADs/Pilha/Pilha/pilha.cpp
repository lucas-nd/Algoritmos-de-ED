#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
    top = NULL;
}

void pilha::push(int valor){
    struct no * novo = new struct no;

    novo->prox = top;
    novo->dado = valor;
    top = novo;
}

void pilha::pop(){
    if(top == NULL){
        cout << "pilha vazia";
    }else{
        struct no * aux = top;
        top = aux->prox;
        delete aux;
    }
    
}

bool pilha::itsEmpty(){
    if(top == NULL){
        return true;
    }else{
        return false;
    }
}

int pilha::_top(){
    return top->dado;
}