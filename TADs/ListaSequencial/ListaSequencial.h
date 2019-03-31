#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

class listaSequencial{
    private:
        int tamanho;
        int tamanho_max;
        int * v; 

    public: 
        listaSequencial(int n);   
        int getElement(int n);
        bool cheia();
        int getSize();
        void limpar();
        void imprimir();
        void inserir(int n);
        int buscar(int n);
        void remover(int n);
        int valorMin();
        void removerValorMax();
        int primeiraOcorrencia(int n);
};

#endif