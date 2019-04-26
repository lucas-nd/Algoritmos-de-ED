/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

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
    struct No * novo = new (nothrow) struct No;

    if(novo == NULL){
        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
        cout << "-               Erro em alocar a memória                  -" << endl;
        cout << "-----------------------------------------------------------" << endl;
        exit(1);
    }

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
    struct No * novo = new (nothrow) struct No;

    if(novo == NULL){
        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
        cout << "-               Erro em alocar a memória                  -" << endl;
        cout << "-----------------------------------------------------------" << endl;
        exit(1);
    }

    if(head == NULL){ // Inserção do primeiro elemento no DEQUE e atualiza os valores dos ponteiros
        head = novo;
        tail = novo;
        novo->prox = novo;
        novo->ant = novo;
        novo->valor = data;
    }else{ // Inserção de um elemento no DEQUE e atualiza os ponteiros
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
    struct No * i = head; // i é um ponteiro auxiliar para ser usado majoritariamente no while, por ser necessário quase que exclusivamente no while optei por chamar de i já que é comum usar com esse nome em laços de repetição

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
    struct No * i = tail; // i é um ponteiro auxiliar para ser usado majoritariamente no while, por ser necessário quase que exclusivamente no while optei por chamar de i já que é comum usar com esse nome em laços de repetição

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
    int result = aux->valor;

    if(aux->prox == head){ // atualiza o valor dos ponteiros caso só exista 1 nó
        head = NULL;
        tail = NULL;
    }else{ // atualiza o valor dos ponteiros
        tail->prox = head->prox;
        head->prox->ant = head->ant;
        head = head->prox;
    }
    
    delete aux; // Desaloca a memoria que é apontada por aux
    return result;
}

int deque::remove_end(){
    struct No * aux = tail;
    int result = aux->valor;

    if(aux->ant == tail){ // atualiza o valor dos ponteiros caso só exista 1 nó
        head = NULL;
        tail = NULL;
    }else{ // atualiza o valor dos ponteiros
        head->ant = tail->ant;
        tail->ant->prox = tail->prox;
        tail = tail->ant;
    }

    delete aux; // Desaloca a memoria que é apontada por aux
    return result;
}