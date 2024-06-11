#include "../Headers/Professor.h"
#include <iostream>

Professor::Professor(const std::string& nome, int idade, const std::string& departamento)
    : Pessoa(nome, idade), departamento(departamento) {}

Professor::~Professor() {}

std::string Professor::getDepartamento() const {
    return departamento;
}

void Professor::mostrarInformacoes() const {
    Pessoa::mostrarInformacoes();
    std::cout << "Departamento: " << departamento << std::endl;
}
