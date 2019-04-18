#ifndef DEQUE_H
#define DEQUE_H

class deque{
    private:
        int inicio;
        int fim;
        int *v;
        int capacidade;
        int size;
    
    public:
        deque(int capacidade);
        void insert_ini(int dado);
        void insert_end(int dado);
        int remove_ini();
        int remove_end();
        int head();
        int tail();
        bool itsEmpty();
        void print();
        void print_reverse();
        void teste();
        void destrutor();
};

#endif