#include <iostream>
#include "deque.h"

using namespace std;

deque::deque(int capacity_max){
    start = 0;
    end = (0 - 1 + capacity_max) % capacity_max; // O primeiro valor que end vai receber é o índice em que será guardado a primeira inserção no inicio, já que a função -- insert_ini -- não manipula o atributo end e o atributo end será sempre igual até que seja inserido algum valor no final ou retirado.
    capacity = capacity_max;
    vector = new int[capacity_max];
    size = 0;
}

void deque::insert_ini(int data){
    if(size == capacity){
        cout << "O deque está cheio!" << endl;
    }else{
        start = (start - 1 + capacity) % capacity;
        vector[start] = data;
        size++;
    }
}

void deque::insert_end(int data){
    if(size == capacity){
        cout << "O deque está cheio!" << endl;
    }else{
        end = (end + 1) % capacity;
        vector[end] = data;
        size++;
    }
}

int deque::remove_ini(){
    int aux = vector[start];
    start = (start + 1 + capacity) % capacity; // Faz o start virar o indice anterior ao indice inicial
    size--;
    return aux;
}

int deque::remove_end(){
    int aux = vector[end];
    end = (end - 1 + capacity) % capacity; // Faz o end virar o indice anterior ao indice final
    size--;
    return aux;
}

int deque::head(){
    return vector[start];
}

int deque::tail(){
    return vector[end];
}

bool deque::itsEmpty(){
    if(size == 0){
        return true;
    }else{
        return false;
    }
}

void deque::print(){
    if(size == 0){
        cout << "Não tem nada para ser exibido!";
        return;
    }

    int aux = start;
    for(int i = 1; i <= size; i++){
        cout << vector[aux] << " ";
        aux = (aux + 1 + capacity) % capacity;
    }
}

void deque::print_reverse(){
    if(size == 0){
        cout << "Não tem nada para ser exibido!";
        return;
    }

    int aux = end;
    for(int i = 1; i <= size; i++){
        cout << vector[aux] << " ";
        aux = (aux - 1 + capacity) % capacity;
    }
}

void deque::destrutor(){
    start = 0;
    end = (0 - 1 + capacity) % capacity;
    capacity = 0;
    delete[] vector;
    size = 0;
}