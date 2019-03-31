#include <iostream>
#include "ListaSequencial.h"

using namespace std;

listaSequencial::listaSequencial(int n){
    tamanho = 0;
    tamanho_max = n;
    v = new int[n]; 
}

int listaSequencial::getElement(int n){
    return v[n];
}

bool listaSequencial::cheia(){
    if(tamanho == tamanho_max){
        return true;
    }else{
        return false;
    }
}

int listaSequencial::getSize(){
    return tamanho;
}

void listaSequencial::limpar(){
    tamanho = 0;
}

void listaSequencial::imprimir(){
    for(int i = 0; i < tamanho; i++){
        cout << v[i] << " ";
    }
}

void listaSequencial::inserir(int n){
    v[tamanho] = n;
    tamanho++;
}

int listaSequencial::buscar(int n){
    for(int i = 0; i < tamanho; i++){
        if(v[i] == n){
            return i;
        }
    }
    return -1;
}

void listaSequencial::remover(int n){
    for(int i = buscar(n); i < tamanho; i++){
        v[i] = v[i+1];
    }

    tamanho--;
}

int listaSequencial::valorMin(){
    int aux = v[0];
    for(int i = 1; i < tamanho; i++){
        if(aux > v[i]){
            aux = v[i];
        }
    }

    return aux;
}

void listaSequencial::removerValorMax(){
    int aux = v[0];
    for(int i = 1; i < tamanho; i++){
        if(aux < v[i]){
            aux = v[i];
        }
    }

    remover(aux);
}

int listaSequencial::primeiraOcorrencia(int n){
    for(int i = 0; i < tamanho; i++){
        if(v[i] == n){
            return i;
        }
    }
}