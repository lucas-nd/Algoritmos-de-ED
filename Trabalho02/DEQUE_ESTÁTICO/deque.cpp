#include <iostream>
#include "deque.h"

using namespace std;

deque::deque(int tam_max){
    inicio = 0;
    fim = 0;
    capacidade = tam_max;
    v = new int[tam_max];
}

void deque::insert_ini(int dado){
    if(fim + 1 == capacidade){
        cout << "Está cheio!";
    }else{
        fim++;
        for(int i = fim; i != 0; i--){
            v[i] = v[i - 1];
        }
        v[inicio] = dado;
    }
}

void deque::insert_end(int dado){
    if(fim + 1 == capacidade){
        cout << "Está cheio!";
    }else{
        fim++;
        v[fim] = dado;
    }
}

int deque::remove_ini(){
    int aux = v[inicio];
    inicio++;
    return aux;
}

int deque::remove_end(){
    int aux = v[fim];
    fim--;
    return aux;
}

int deque::head(){
    return v[inicio];
}

int deque::tail(){
    return v[fim - 1];
}

bool deque::itsEmpty(){
    if(inicio == fim){
        return true;
    }else{
        return false;
    }
}

void deque::print(){
    for(int i = inicio; i != fim; i++){
        cout << v[i] << " ";
    }
}

void deque::print_reverse(){
    for(int i = fim - 1; i >= inicio; i--){
        cout << v[i] << " ";
    }
}

void deque::teste(){
    cout << v[inicio] << " " << v[fim];
}