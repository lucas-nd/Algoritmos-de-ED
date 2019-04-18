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
        void insert_ini(int dado);
        void insert_end(int dado);
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