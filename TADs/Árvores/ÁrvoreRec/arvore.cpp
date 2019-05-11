#include <iostream>
#include "arvore.h"

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

bool arv_vazia(struct noArv * no){
    return (no == NULL);
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
        cout << "liberando: " << no->dado << endl;
        delete no;
    }
    return NULL;
}

bool arv_pertence(struct noArv* no , int chave){
    if(no == NULL){
        return false;
    }else if(no->dado == chave){
        return true;
    }else{
        arv_pertence(no->esq, chave);
        arv_pertence(no->dir, chave);
    }
}

int arv_numero_nos(struct noArv * no){
    if(no == NULL){
        return 0;
    }else{
        return 1 + arv_numero_nos(no->esq) + arv_numero_nos(no->dir);
    }
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

int arv_numero_folhas(struct noArv * no){
    if(no == NULL){
        return 0;
    }else if(no->dir == NULL && no->esq == NULL){
        return 1;
    }else{
        return arv_numero_folhas(no->dir) + arv_numero_folhas(no->esq);
    }
}

noArv * libera_folhas(struct noArv * no, int chave){
    if(no == NULL){
        return NULL;
    }else if(no->dir == NULL && no->esq == NULL && no->dado == chave){
        delete no;
        return NULL;
    }else{
        no->esq = libera_folhas(no->esq, chave);
        no->dir = libera_folhas(no->dir, chave);
        return no;
    }
}