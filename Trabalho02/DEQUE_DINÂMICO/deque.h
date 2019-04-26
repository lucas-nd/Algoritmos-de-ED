/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#ifndef DEQUE_H
#define DEQUE_H

struct No{
    int valor;
    struct No * prox;
    struct No * ant;
};

class deque{
    private:
        struct No * head;
        struct No * tail;
    
    public:
        deque();
        ~deque();
        void insert_ini(int data);
        void insert_end(int data);
        int _head();
        int _tail();
        bool itsEmpty();
        void print();
        void print_reverse();
        void teste();
        int remove_ini();
        int remove_end();
};

#endif