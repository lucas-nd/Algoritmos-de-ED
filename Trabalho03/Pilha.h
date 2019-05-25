#ifndef PILHA_H
#define PILHA_H

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