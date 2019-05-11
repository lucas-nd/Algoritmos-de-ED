#ifndef PILHA_H
#define PILHA_H

struct no{
    int dado;
    struct no * prox;
};

class pilha{
    private:
        struct no * top;
    
    public:
        pilha();
        void push(int valor);
        void pop();
        bool itsEmpty();
        int _top();
};

#endif