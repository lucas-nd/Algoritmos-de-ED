#ifndef ARVORE_H
#define ARVORE_H

struct noArv{
    struct noArv * esq;
    struct noArv * dir;
    int dado;
};

noArv * criaVazia();
noArv * arv_Cria(int chave , struct noArv * esq , struct noArv * dir);
bool arv_vazia(struct noArv * no);
void arv_imprime(struct noArv * no);
noArv * arv_libera(struct noArv * no);
bool arv_pertence(struct noArv* no , int chave);
int arv_numero_nos(struct noArv * no);
int arv_altura(struct noArv * no);
int arv_numero_folhas(struct noArv * no);
noArv * libera_folhas(struct noArv * no, int chave);
noArv * espelho(struct noArv * no);
int arv_maior(struct noArv * no);
int eh_completa(struct noArv * no);
bool eh_avl(struct noArv * no);
int num_nos_arv_it(struct noArv * no);

#endif