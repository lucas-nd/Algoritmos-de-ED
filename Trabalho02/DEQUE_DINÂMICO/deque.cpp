#include <iostream>
#include "deque.h"

using namespace std;

deque::deque(){
    head = NULL;
    tail = NULL;
}

deque::~deque(){
    while(head != NULL){
        struct No * aux = head;
        head = head->prox;
        delete aux;
    }

    tail = NULL;
}

void deque::insert_ini(int dado){
    struct No * novo = new struct No;

    if(head == NULL){
        head = novo;
        tail = novo;
        novo->prox = novo;
        novo->ant = novo;
        novo->valor = dado;
    }else{
        novo->prox = head;
        novo->ant = tail;
        head->ant = novo;
        tail->prox = novo;
        head = novo;
        novo->valor = dado;
    }
}

void deque::insert_end(int dado){
    struct No * novo = new struct No;

    if(head == NULL){
        head = novo;
        tail = novo;
        novo->prox = novo;
        novo->ant = novo;
        novo->valor = dado;
    }else{
        struct No * aux = head->ant;

        novo->ant = head->ant;
        novo->prox = head;
        head->ant = novo;
        aux->prox = novo;
        novo->valor = dado;
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

    do{
        cout << i->valor << " ";
        i = i->prox;
    }while(i != head);
}

void deque::print_reverse(){
    struct No * i = tail;

    do{
        cout << i->valor << " ";
        i = i->ant;
    }while(i != tail);
}

int deque::remove_ini(){
    struct No * aux = head;
    int resultado = aux->valor;

    head->ant->prox = head->prox;
    head->prox = head->ant->prox;
    head = head->prox;

    delete aux;
    return resultado;
}

int deque::remove_end(){
    struct No * aux = tail;
    int resultado = aux->valor;

    tail->ant->prox = tail->prox;
    tail->prox = tail->ant->prox;
    tail = tail->prox;

    delete aux;
    return resultado;
}

void deque::teste(){
    cout << tail->valor << " ";
    cout << tail->ant->valor << " ";
    struct No* aux = tail->ant;
    cout << aux->ant << " ";
    cout << tail->ant;
}