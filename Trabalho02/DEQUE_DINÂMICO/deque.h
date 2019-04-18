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
        
};

#endif