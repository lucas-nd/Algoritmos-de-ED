/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#ifndef DEQUE_H
#define DEQUE_H

class deque{
    private:
        int start;
        int end;
        int *vector;
        int capacity;
        int size;
    
    public:
        deque(int capacity_max);
        void insert_ini(int data);
        void insert_end(int data);
        int remove_ini();
        int remove_end();
        int head();
        int tail();
        bool itsEmpty();
        void print();
        void print_reverse();
        void destrutor();
};

#endif