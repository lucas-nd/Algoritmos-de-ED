#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

struct No {
    int valor;
    struct No * prox;
};

struct No * lcircular_criar();
struct No * lcircular_adicionar(struct No *, int);
void lcircular_imprimir(struct No *);

#endif