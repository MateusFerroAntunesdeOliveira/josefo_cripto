#include <iostream>
#include "listaCircular.h"

using namespace std;

int main() {
	Lista a;

	a.insere('A');
	a.insere('B');
	a.insere('C');

	a.imprime();

	cout << a.remove() << endl;
}
