#include <iostream>
#include "deque.h"

using namespace std;

deque::deque(){
    head = NULL;
    tail = NULL;
}

deque::~deque(){
    int control = 1;
    while(control == 1){
        if(head == NULL){
            control = 0;
        }else{
            remove_ini();
        }
    }
}

void deque::insert_ini(int data){
    struct No * novo = new struct No;

    if(head == NULL){ // Inserção do primeiro elemento do DEQUE e atualiza os valores dos ponteiros
        head = novo;
        tail = novo;
        novo->prox = novo;
        novo->ant = novo;
        novo->valor = data;
    }else{ // Inserção de um elemento no DEQUE e atualiza os ponteiros
        novo->prox = head;
        novo->ant = tail;
        head->ant = novo;
        tail->prox = novo;
        head = novo;
        novo->valor = data;
    }
}

void deque::insert_end(int data){
    struct No * novo = new struct No;

    if(head == NULL){ // Inserção do primeiro elemento no DEQUE
        head = novo;
        tail = novo;
        novo->prox = novo;
        novo->ant = novo;
        novo->valor = data;
    }else{
        struct No * aux = head->ant;

        novo->ant = head->ant;
        novo->prox = head;
        head->ant = novo;
        aux->prox = novo;
        novo->valor = data;
        tail = novo;
    }
}

int deque::_head(){
    return head->valor;
}

int deque::_tail(){
    return tail->valor;
}

bool deque::itsEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void deque::print(){
    struct No * i = head;

    if(i == NULL){
        cout << "Não tem nada para ser exibido!";
        return;
    }

    do{
        cout << i->valor << " ";
        i = i->prox;
    }while(i != head);
}

void deque::print_reverse(){
    struct No * i = tail;

    if(i == NULL){
        cout << "Não tem nada para ser exibido!";
        return;
    }

    do{
        cout << i->valor << " ";
        i = i->ant;
    }while(i != tail);
}

int deque::remove_ini(){
    struct No * aux = head;
    int resultado = aux->valor;

    if(aux->prox == head){ // atualiza o valor dos ponteiros caso só exista 1 nó
        head = NULL;
        tail = NULL;
    }else{ // atualiza o valor dos ponteiros
        head->ant->prox = head->prox;
        head->ant->ant = head->ant->ant->ant;
        head->prox = head->ant->prox;
        head = head->prox;
    }
    
    delete aux;
    return resultado;
}

int deque::remove_end(){
    struct No * aux = tail;
    int resultado = aux->valor;

    if(aux->ant == tail){ // atualiza o valor dos ponteiros caso só exista 1 nó
        head = NULL;
        tail = NULL;
    }else{ // atualiza o valor dos ponteiros
        tail->ant->prox = tail->prox;
        tail->ant->ant = tail->ant->ant->ant;
        tail->prox = tail->ant->prox;
        tail = tail->prox;
    }

    delete aux;
    return resultado;
}