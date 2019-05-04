#include <iostream>
#include "ListaCircular.cpp"
using namespace std;

int main(){
    struct No * lista = lcircular_criar();
    lista = lcircular_adicionar(lista, 10);
    lista = lcircular_adicionar(lista, 10);
    lista = lcircular_adicionar(lista, 10);

    lcircular_imprimir(lista);
}