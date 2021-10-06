#include <iostream>
#include <string>
#include <fstream>
#include "listaCircular.h"
#include "listaCircular.cpp"

using namespace std;

int main() {
	//-> Declaracoes
	Lista lista;
	int m;
	char ch;
	string nome_arquivo;

	//-> Le do usuario um .txt com os valores e os insere na lista
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
	cout << "\nDigite o nome do arquivo (inclua a digitacao do .txt ao fim): ";
	cin >> nome_arquivo;
	ifstream txtFile(nome_arquivo);
	while (txtFile.get(ch)) if (ch != '\n') lista.insere(ch);
	txtFile.close();

	//-> Le do usuario um numero M e imprime a lista original
	cout << "\nQual a frequencia de remocao (ex: 3, vai removendo 3 em 3): "; 
	cin >> m;
	cout << "\nLista Original: " << endl;
	lista.imprime();

	// -> Criptografa os valores e imprime a lista criptografada
	cout << "\nCriptografada: " << endl;
	while (!lista.vazia()) {
		for (int i = 0; i < m - 1; ++i)	lista.insere(lista.remove());
		cout << lista.remove() << " ";
	}
	cout << endl << endl;

	//TODO Transformar em .jcripto
	//TODO Restaurar o arquivo original (fazer a descriptografia)
}
