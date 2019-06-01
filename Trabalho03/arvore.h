/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#ifndef ARVORE_H
#define ARVORE_H

struct noArv{
    struct noArv * esq;
    struct noArv * dir;
    int dado;
};

// Necessárias para testar as questões.
noArv * criaVazia();
noArv * arv_Cria(int chave , struct noArv * esq , struct noArv * dir);
void arv_imprime(struct noArv * no);
noArv * arv_libera(struct noArv * no);

// Necessária para a resolução de uma das questões.
int arv_altura(struct noArv * no);

// As questões, na ordem.
int eh_completa(struct noArv * no);
bool eh_avl(struct noArv * no);
noArv * espelho(struct noArv * no);
int num_nos_arv_it(struct noArv * no);
int arv_maior(struct noArv * no);

#endif