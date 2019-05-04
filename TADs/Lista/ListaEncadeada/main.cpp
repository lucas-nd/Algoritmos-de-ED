#include <iostream>
#include "ListaEncadeada.cpp"
using namespace std;

int main(){
    listaEncadeada lista;
    listaEncadeada lista2;

    lista.adicionar(1);
    lista.adicionar(2);
    lista.adicionar(3);


    lista2.adicionar(1);
    lista2.adicionar(2);
    lista2.adicionar(3);

    lista.imprimir();
    cout << endl;
    lista2.imprimir();
    cout << endl;
    
    lista.concatenar(lista2);
    lista.remover(3);
    lista.imprimir();
}