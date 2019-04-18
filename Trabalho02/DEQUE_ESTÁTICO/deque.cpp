#include <iostream>
#include "deque.h"

using namespace std;

deque::deque(int tam_max){
    inicio = 0;
    fim = (0 - 1 + tam_max) % tam_max;
    capacidade = tam_max;
    v = new int[tam_max];
    size = 0;
}

void deque::insert_ini(int dado){
    if(size == capacidade){
        cout << "Está cheio!";
    }else{
        inicio = (inicio - 1 + capacidade) % capacidade;
        v[inicio] = dado;
        size++;
    }
}

void deque::insert_end(int dado){
    if(size == capacidade){
        cout << "Está cheio!";
    }else{
        fim = (fim + 1) % capacidade;
        v[fim] = dado;
        size++;
    }
}

int deque::remove_ini(){
    int aux = v[inicio];
    inicio = (inicio + 1 + capacidade) % capacidade;
    size--;
    return aux;
}

int deque::remove_end(){
    int aux = v[fim];
    fim = (fim - 1 + capacidade) % capacidade;
    size--;
    return aux;
}

int deque::head(){
    return v[inicio];
}

int deque::tail(){
    return v[fim];
}

bool deque::itsEmpty(){
    if(size == 0){
        return true;
    }else{
        return false;
    }
}

void deque::print(){
    int aux = inicio;
    for(int i = 1; i <= size; i++){
        cout << v[aux] << " ";
        aux = (aux + 1 + capacidade) % capacidade;
    }
}

void deque::print_reverse(){
    int aux = fim;
    for(int i = 1; i <= size; i++){
        cout << v[aux] << " ";
        aux = (aux - 1 + capacidade) % capacidade;
    }
}

void deque::destrutor(){
    inicio = 0;
    fim = (0 - 1 + capacidade) % capacidade;
    capacidade = 0;
    delete[] v;
    size = 0;
}

void deque::teste(){
    cout << v[inicio] << " " << inicio << endl;
    cout << v[fim] << " " << fim << endl;
    cout << v[1];
}