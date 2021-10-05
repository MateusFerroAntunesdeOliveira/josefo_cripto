#include "listaCircular.h"
#include <iostream>

using namespace std;

Lista::Lista() {
	lista = nullptr;
	numnos = 0;
}

Lista::~Lista() {
	cout << "Deletando memoria da lista" << endl;
	while (!vazia()) { cout << remove() << endl; }
}

void Lista::insere(TipoDado x) {
	No* novono = new No;
	novono->info = x;

	if (!vazia()) {
		novono->prox = lista->prox;
		lista->prox = novono;
	}
	else novono->prox = novono;

	lista = novono;
	++numnos;
}

TipoDado Lista::remove() {
	TipoDado aux;
	if (!vazia()) {
		No* rem = lista->prox;
		lista->prox = rem->prox;
		aux = rem->info;
		delete rem;
		--numnos;
		if (numnos == 0) lista = nullptr;
	}
	else cerr << "lista vazia!" << endl;
	return aux;
}

unsigned int Lista::tam() const { return numnos; }

bool Lista::vazia() const { return (numnos == 0); }

void Lista::imprime() const {
	No* tmp = lista->prox;
	if (!vazia()) {
		while (tmp != lista) {
			cout << tmp->info << ", ";
			tmp = tmp->prox;
		}
	}
	cout << tmp->info << endl;
}
