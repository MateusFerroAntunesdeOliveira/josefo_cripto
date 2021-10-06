#include <iostream>
#include "listaCircular.h"
#include "listaCircular.cpp"

using namespace std;

int main() {
	Lista lista;
	int m;

	lista.insere('A');
	lista.insere('B');
	lista.insere('C');
	lista.insere('D');
	lista.insere('E');
	lista.insere('F');
	lista.insere('G');

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	cout << "\nQual a frequencia de remocao (ex: 3, vai removendo 3 em 3): "; 
	cin >> m;
	cout << "\nLista Original: " << endl;
	lista.imprime();
	cout << "\nCriptografada: " << endl;

	while (!lista.vazia()) {
		for (int i = 0; i < m - 1; ++i) {
			lista.insere(lista.remove());
		}
		cout << lista.remove() << " ";
	}
	cout << endl << endl;

	//TODO Restaurar o arquivo original (fazer a descriptografia)
	//TODO Ler do usuario um .txt e um numero M
	//TODO Transformar em .jcripto
}
