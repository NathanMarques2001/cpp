#include <math.h>
#include "../Headers/Quadrado.h"

Quadrado::Quadrado(){
	this->lado = 1.0;
}

Quadrado::Quadrado(float lado){
	this->lado = lado;
}

Quadrado::Quadrado(float x, int opcao){
	if(opcao == 1){
		this->lado = x / 4;
	} else if(opcao == 2){
		this->lado = sqrt(x);
	} else if(opcao == 3){
		this->lado = x / sqrt(2);
	}
}

Quadrado::~Quadrado(){
	// Destrutor
}

bool Quadrado::validaLado(){
	if(this->lado > 0) {
		return true;
	}	
	return false;
}

float Quadrado::perimetro(){
	return this->lado * 4;
}

float Quadrado::area(){
	return this->lado * this->lado;
}

float Quadrado::diagonal(){
	return this->lado * sqrt(2);
}

float Quadrado::getLado(){
	return this->lado;
}
