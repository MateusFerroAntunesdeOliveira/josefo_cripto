#include <iostream>
#include "listaCircular.h"
#include "listaCircular.cpp"

using namespace std;

int main() {
	Lista lista;
	int n;

	lista.insere('A');
	lista.insere('B');
	lista.insere('C');
	lista.insere('D');
	lista.insere('E');
	lista.insere('F');
	lista.insere('G');

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	cout << "\nQual a frequencia de remocao (ex: 3, vai removendo 3 em 3): "; 
	cin >> n;
	cout << "\nLista Original: " << endl;
	lista.imprime();
	cout << "\nCriptografada: " << endl;

	while (!lista.vazia()) {
		for (int i = 0; i < n - 1; ++i) {
			lista.insere(lista.remove());
		}
		cout << lista.remove() << " ";
	}
	cout << endl << endl;
}
