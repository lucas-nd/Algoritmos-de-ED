/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#include <iostream>
#include "arvore.h"
#include "Pilha.cpp" // Caso for compilar o algoritmo através de uma IDE use -- #include "Pilha.cpp" --, caso contrário mude para -- #include "Pilha.h" --

using namespace std;

noArv * criaVazia(){
    return NULL;
}

noArv* arv_Cria(int chave , noArv* esq2 , noArv* dir2){
    struct noArv * novo = new struct noArv;

    novo->dado = chave;
    novo->dir = dir2;
    novo->esq = esq2;

    return novo;
}

void arv_imprime(struct noArv * no){
    if(no == NULL){
        return;
    }else{
        cout << no->dado << endl;
        arv_imprime(no->esq);
        arv_imprime(no->dir);
    }
}

noArv * arv_libera(struct noArv * no){
    if(no != NULL){
        no->esq = arv_libera(no->esq);
        no->dir = arv_libera(no->dir);
        delete no;
    }
    return NULL;
}

int arv_altura(struct noArv * no){
    if(no == NULL){
        return 0;
    }else{
        int alt_esq = arv_altura(no->esq);
        int alt_dir = arv_altura(no->dir);

        if(alt_esq > alt_dir){
            return 1 + alt_esq;
        }else{
            return 1 + alt_dir;
        }
    }
}

int eh_completa(struct noArv * no){
    if(no == NULL || (no->esq != NULL && no->dir == NULL)){ // Cobre os casos finais em que a árvore é completa.
        return 1;
    }else if(no->esq == NULL && no->dir != NULL){ // Cobre os casos finais em que a árvore não é completa.
        return 0;
    }else{
        int esq = eh_completa(no->esq); // Chama o mesmo problema, só que menor.
        int dir = eh_completa(no->dir); // Chama o mesmo problema, só que menor.

        if(esq == 0 || dir == 0){ // Após ter os resultados, ele verifica o que os resultados significam.
            return 0;
        }else{
            return 1;
        }
    }
}

bool eh_avl(struct noArv * no){
    if(no == NULL){
        return true;
    }else{
        int esq = arv_altura(no->esq); // Descobre o tamanho da sub-árvore a esqueda.
        int dir = arv_altura(no->dir); // Descobre o tamanho da dub-árvore a direita.

        if(esq - dir > 1 || esq - dir < -1){ // Calcula se o tamanho das sub-árvores caracterizam se é uma árvore AVL ou não.
            return false;
        }else{
            return true;
        }
    }
}

noArv * espelho(struct noArv * no){
    if(no == NULL){
        return NULL;
    }else{
        struct noArv * novo = new struct noArv; // Cria um novo nó para receber um valor da árvore original.
        novo->dado = no->dado;
        novo->dir = espelho(no->esq); // Chama recursivamente o mesmo problema.
        novo->esq = espelho(no->dir); // Chama recursivamente o mesmo problema.
        return novo; // Retorna para o nó anterior, para que a ligação entre os nós seja feita.
    }
}

int num_nos_arv_it(struct noArv * no){
    if(no == NULL){
        return 0;
    }

    Pilha * p = new Pilha(); // Cria uma pilha para auxiliar na operação.
    p->push(no);
    int total = 0;

    while(!p->isEmpty()){ // Testa se a pilha não está vazia.
        no = (struct noArv *) p->pop(); // Desempilha e coloca em no, pois posteriomente veremos se devemos incrementar ou não o contador.
        if(no != NULL){
            total++;
            p->push(no->dir);
            p->push(no->esq);
        }
    }

    delete p; // Desaloca o espaço utilizado.
    return total;
}

int arv_maior(struct noArv * no){
	if(no == NULL){
        return 0;
    }else if(no->dir == NULL && no->esq == NULL){ // Cobre o caso em que estamos no ultimo nó, portanto devemos retorna-lo.
        return no->dado;
    }else{
        int esq = arv_maior(no->esq); // Divide o problema.
        int dir = arv_maior(no->dir); // Divide o problema.
    
        if(esq >= dir){ // Testa os valores obtidos com o valor do nó atual e retorna o seu respectivo significado.
            if(no->dado >= esq){
                return no->dado;
            }else{
                return esq;
            }
        }else{
            if(no->dado >= dir){
                return no->dado;
            }else{
                return dir;
            }
        }
    }
}



