#include <iostream>
#include "arvore.cpp"

using namespace std;

int main(){
    struct noArv * n10 = arv_Cria(600, criaVazia(), criaVazia());
    struct noArv * n9 = arv_Cria(500, criaVazia(), criaVazia());
    struct noArv * n8 = arv_Cria(400, criaVazia(), n10);
    struct noArv * n7 = arv_Cria(300, n9, criaVazia());
    struct noArv * n6 = arv_Cria(200, n7, n8);
    struct noArv * raiz = arv_Cria(100, criaVazia(), n6);

    struct noArv * n5 = arv_Cria(60, criaVazia(), criaVazia());
    struct noArv * n4 = arv_Cria(50, criaVazia(), criaVazia());
    struct noArv * n3 = arv_Cria(40, criaVazia(), criaVazia());
    struct noArv * n2 = arv_Cria(30, n4, n5);
    struct noArv * n1 = arv_Cria(20, n3, criaVazia());
    struct noArv * raiz2 = arv_Cria(10, n1, n2);
    
    cout << "Imprimindo a primeira árvore: ";
    arv_imprime(raiz);
    cout << endl;

    cout << "Imprimindo a segunda árvore: ";
    arv_imprime(raiz2);
    cout << endl;

    cout << "Testando a primeira questão: " << endl;
    cout << "Primeira árvore: " << eh_completa(raiz) << endl;
    cout << "Segunda árvore: " << eh_completa(raiz2) << endl;
    cout << endl;

    cout << "Testando a segunda questão: " << endl;
    cout << "Primeira árvore: " << eh_avl(raiz) << endl;
    cout << "Segunda árvore: " << eh_avl(raiz2) << endl;
    cout << endl;

    cout << "Testando a terceira questão: " << endl;
    struct noArv * espelhoRaiz = espelho(raiz);
    cout << "Primeira árvore: ";
    arv_imprime(espelhoRaiz);
    cout << endl;
    struct noArv * espelhoRaiz2 = espelho(raiz2);
    cout << "Segunda árvore: ";
    arv_imprime(espelhoRaiz2);
    cout << endl;

    cout << "Testando a quarta questão: " << endl;
    cout << "Primeira árvore: " << num_nos_arv_it(raiz) << endl;
    cout << "Segunda árvore: " << num_nos_arv_it(raiz2) << endl;
    cout << endl;

    cout << "Testando a quinta questão: " << endl;
    cout << "Primeira árvore: " << arv_maior(raiz) << endl;
    cout << "Segunda árvore: " << arv_maior(raiz2) << endl;
    cout << endl;

    raiz = arv_libera(raiz);
    raiz2 = arv_libera(raiz2);
}