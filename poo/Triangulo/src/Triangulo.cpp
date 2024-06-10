#include <math.h>
#include "../Headers/Triangulo.h"

Triangulo::Triangulo() {
    lado1 = 3.0;
    lado2 = 4.0;
    lado3 = 5.0;
    quantidade++;
}

Triangulo::Triangulo(float lado1, float lado2, float lado3) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
    quantidade++;
}

Triangulo::~Triangulo() {
    // Objeto destruído!
    quantidade--;
}

float Triangulo::getLado1() {
    return lado1;
}

void Triangulo::setLado1(float lado1) {
    this->lado1 = lado1;
}

float Triangulo::getLado2() {
    return lado2;
}

void Triangulo::setLado2(float lado2) {
    this->lado2 = lado2;
}

float Triangulo::getLado3() {
    return lado3;
}

void Triangulo::setLado3(float lado3) {
    this->lado3 = lado3;
}

int Triangulo::quantidade = 0;

int Triangulo::getQuantidade() {
    return quantidade;
}

void Triangulo::setQuantidade(int quantidade) {
    Triangulo::quantidade = quantidade;
}

float Triangulo::perimetro() {
    return lado1 + lado2 + lado3;
}

float Triangulo::area() {
    float sp = (lado1 + lado2 + lado3) / 2;
    return sqrt(sp * (sp - lado1) * (sp - lado2) * (sp - lado3));
}

bool Triangulo::isValido() {
    return (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
}
