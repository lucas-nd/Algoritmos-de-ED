#include <iostream>
#include "pilhaDupla.h"

using namespace std;

pilhaDupla::pilhaDupla(int x){
    capacidade = x;
    _topA = -1;
    _topB = capacidade;
    v = new int[capacidade];
}

void pilhaDupla::pushA(int x){
    if(_topA + 1 == _topB){
        cout << "A pilha está cheia!";
    }else{
        _topA++;
        v[_topA] = x;
    }
}

void pilhaDupla::pushB(int x){
    if(_topB - 1 == _topA){
        cout << "A pilha está cheia!";
    }else{
        _topB--;
        v[_topB] = x;
    }
}

int pilhaDupla::popA(){
    if(_topA == -1){
    }else{
        int aux = v[_topA];
        _topA--;
        return aux;
    }
}

int pilhaDupla::popB(){
    if(_topB == capacidade){ 
    }else{
        int aux = v[_topB];
        _topB++;
        return aux;
    }
}

bool pilhaDupla::AItsEmpty(){
    if(_topA == -1){
        return true;
    }else{
        return false;
    }
}

bool pilhaDupla::BItsEmpty(){
    if(_topB == capacidade){
        return true;
    }else{
        return false;
    }
}

pilhaDupla::~pilhaDupla(){
    _topA = -1;
    _topB = capacidade;
    delete[] v;
}