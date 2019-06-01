/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#ifndef PILHA_H
#define PILHA_H

//TAD usado na resolução de uma das questões.
struct nopilha {
    void *dado; // tipo de dado generico
    struct nopilha *prox;
};

typedef struct nopilha NoPilha;

class Pilha {
    private:
        NoPilha* _top;
    public:
        Pilha();
        ~Pilha();
        void push(void *v);
        void* pop();
        void* top();
        bool isEmpty();
};

#endif