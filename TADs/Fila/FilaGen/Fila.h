#ifndef FILA_H
#define FILA_H

struct nofila {
    void* dado; // tipo de dado generico
    struct nofila *prox;
};

typedef struct nofila NoFila;

class Fila {
    private:
        NoFila* _ini;
        NoFila* _fim;
        int _tamanho;
    public:
        Fila(); // construtor
        ~Fila();  // destrutor
        void enfileirar(void* v);
        void* desenfileirar();
        bool vazia();
        void* cabeca();
        void* cauda();
        int tamanho();
};

#endif