#include <iostream>
#include "arvore.cpp"

using namespace std;

int main(){
    struct noArv * n6 = arv_Cria(70, criaVazia(), criaVazia());
    struct noArv * n5 = arv_Cria(60, n6, criaVazia());
    struct noArv * n4 = arv_Cria(50, criaVazia(), criaVazia());
    struct noArv * n3 = arv_Cria(40, criaVazia(), criaVazia());
    struct noArv * n2 = arv_Cria(30, n4, n5);
    struct noArv * n1 = arv_Cria(20, n3, criaVazia());
    struct noArv * raiz = arv_Cria(10, n1, n2);

    struct noArv * raiz2 = espelho(raiz);

    //cout << arv_numero_nos(raiz) << " " << arv_altura(raiz) << " " << arv_numero_folhas(n2) << endl;

    arv_imprime(raiz);
    cout << endl;
    arv_imprime(raiz2);
    cout << endl;
    cout << eh_avl(raiz);
}