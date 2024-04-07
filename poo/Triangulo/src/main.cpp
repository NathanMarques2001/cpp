#include <iostream>
#include <stdio.h>
#include "../Headers/Triangulo.h"

using namespace std;

float* entraLados();
void imprimeTriangulo(Triangulo* t);

int main(){
	float* lados = entraLados();
	Triangulo* tris = new Triangulo(lados[0],lados[1],lados[2]);

	imprimeTriangulo(tris);
	delete(tris);

	cout << "\n\n>>> FIM DE EXECUCAO\n\n";
	return(0);
}

float* entraLados(){
	float* lados = new float[3];
	cout << "Lado 1 = ";
	scanf("%f", &lados[0]);
	cout << "Lado 2 = ";
	scanf("%f", &lados[1]);
	cout << "Lado 3 = ";
	scanf("%f", &lados[2]);
	return lados;
}

void imprimeTriangulo(Triangulo* t){
	if(t == NULL){
		cout << "\n>>> ERRO: OBJETO NULO";
		return;
	}
	cout << "\nLado1 = " << t->getLado1();
	cout << "\nLado2 = " << t->getLado2();
	cout << "\nLado3 = " << t->getLado3();
	cout << "\nPerimetro = " << t->perimetro();
	cout << "\nArea = " << t->area();
}
