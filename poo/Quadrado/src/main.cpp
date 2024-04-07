#include <iostream>
#include <stdio.h>
#include "../Headers/Quadrado.h"

using namespace std;

void imprimeQuadrado(Quadrado* quad);

int main(){
	Quadrado* quad1 = new Quadrado();
	cout << "Quadrado padrao" << endl;
	imprimeQuadrado(quad1);
	delete quad1;
	
	Quadrado* quad2 = new Quadrado(5.0);
	cout << "Quadrado com lado" << endl;
	imprimeQuadrado(quad2);
	delete quad2;

	Quadrado* quad3 = new Quadrado(5.0,1);
	cout << "Quadrado com perimetro" << endl;
	imprimeQuadrado(quad3);
	delete quad3;

	Quadrado* quad4 = new Quadrado(5.0,2);
	cout << "Quadrado com area" << endl;
	imprimeQuadrado(quad4);
	delete quad4;

	Quadrado* quad5 = new Quadrado(5.0,3);
	cout << "Quadrado com diagonal" << endl;
	imprimeQuadrado(quad5);
	delete quad5;
	
	return(0);
}

void imprimeQuadrado(Quadrado* quad){
	cout << "=======================" << endl;
	cout << "Lado: " << quad->getLado() << endl;
	cout << "Perimetro: " << quad->perimetro() << endl;
	cout << "Area: " << quad->area() << endl;
	cout << "Diagonal: " << quad->diagonal() << endl;
	cout << "-----------------------" << endl;
}
