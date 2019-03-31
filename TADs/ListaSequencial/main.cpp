#include <iostream>
#include "ListaSequencial.cpp"

using namespace std;

int main(){
    listaSequencial lista = listaSequencial(10);

    lista.inserir(2);
    lista.inserir(3);
    lista.inserir(6);
    lista.inserir(3);
    lista.inserir(3);
    lista.imprimir();
    cout << lista.valorMin();
    lista.removerValorMax();
    lista.imprimir();
    cout << lista.primeiraOcorrencia(3);
}