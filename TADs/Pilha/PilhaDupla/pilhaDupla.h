#ifndef PILHADUPLA_H
#define PILHADUPLA_H

class pilhaDupla{
    private:
        int _topA;
        int _topB;
        int capacidade;
        int * v;
    public:
        pilhaDupla(int x);
        void pushA(int x);
        void pushB(int x);
        int popA();
        int popB();
        bool AItsEmpty();
        bool BItsEmpty();
        ~pilhaDupla();
};

#endif