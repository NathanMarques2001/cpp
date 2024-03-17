#include <iostream>

using namespace std;

#define PRECO 1.99

int main(){
	int pera = 3;
	char qualidade = 'A';
	float peso = 2.5;
	int idade;
	int dia,mes,ano;

	cout << "Existem " << pera << " peras de qualidade " << qualidade << " pesando " << peso << " quilos." << endl;

	cout << "O preco por quilos eh R$" << PRECO << ", o total eh R$" << peso * PRECO << endl;

	cin >> idade;

	cout << "Entre com a data do seu aniversario (dd mm aa): ";
	cin >> dia >> mes >> ano;

	return (0);
}
