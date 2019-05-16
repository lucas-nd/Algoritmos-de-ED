#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

struct No{
    int valor;
    struct No * prox;
};

class listaEncadeada{
    private:
        struct No * head;

    public:
        listaEncadeada();
        void imprimir();
        void adicionar(int dado);
        void remover(int dado);
        int tamanho();
        int buscar(int dado);
        void destruir();
        struct No * buscarNo(int dado);
        int buscarNoMin();
        int buscarNoMax();
        void concatenar(listaEncadeada lista2);
        void removerNum(int n);
        void removerAll(int dado);
        int ultimo();
};

#endif
