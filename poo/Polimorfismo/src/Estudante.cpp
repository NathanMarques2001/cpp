#include "../Headers/Estudante.h"
#include <iostream>

Estudante::Estudante(const std::string& nome, int idade, const std::string& curso)
    : Pessoa(nome, idade), curso(curso) {}

Estudante::~Estudante() {}

std::string Estudante::getCurso() const {
    return curso;
}

void Estudante::mostrarInformacoes() const {
    Pessoa::mostrarInformacoes();
    std::cout << "Curso: " << curso << std::endl;
}
