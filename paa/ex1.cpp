#include <iostream>

using namespace std;

int algoritmo1(int entrada_atual){
	int quantidade_somas = 0;
	for(int j = 1; j <= entrada_atual; j++){
		for(int k = 1; k <= j; k++){
			quantidade_somas = quantidade_somas + 3;
		}
	}
	return quantidade_somas;
}

int algoritmo2(int entrada_atual){
	int quantidade_somas = 0;
	for(int j = 1; j <= entrada_atual; j++){
		for(int k = j; k <= entrada_atual; k++){
			quantidade_somas = quantidade_somas + 2;
		}
	}
	return quantidade_somas;
}

int algoritmo3(int entrada_atual){
	int quantidade_somas = 0;
	for(int i = 1; i <= entrada_atual; i++){
		for(int j = 1; j <= entrada_atual; j++){
			for(int k = i; k <= entrada_atual; k++){
				quantidade_somas = quantidade_somas + 3;
			}
		}
	}
	return quantidade_somas;
}

int main(){
	int entradas[5] = {10,50,100,500,1000};

	for(int i = 0; i < 5; i++){
		cout << "Algoritmo 1 com " << entradas[i] << " entradas: "
		<< algoritmo1(entradas[i]) << endl;
	}
	cout << "---------------------------" << endl;

	for(int j = 0; j < 5; j++){
		cout << "Algoritmo 2 com " << entradas[j] << " entradas: "
		<< algoritmo2(entradas[j]) << endl;
	}
	cout << "---------------------------" << endl;

	for(int k = 0; k < 5; k++){
		cout << "Algoritmo 3 com " << entradas[k] << " entradas: "
		<< algoritmo3(entradas[k]) << endl;
	}

	return (0);
}
