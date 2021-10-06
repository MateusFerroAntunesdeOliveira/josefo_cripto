#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

#include <string>

using TipoDado = char;

struct No {
    TipoDado info;
    No* prox;
};

class Lista {
public:
    Lista();
    ~Lista();
    void insere(TipoDado x);
    TipoDado remove();
    unsigned int tam() const;
    bool vazia() const;
    void imprime() const;

protected:
    No* lista;
    unsigned int numnos;
};

#endif
