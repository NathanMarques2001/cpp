#include "../Headers/Profissional.h"
#include <iostream>

Profissional::Profissional(const std::string& profissao)
    : profissao(profissao) {}

Profissional::~Profissional() {}

std::string Profissional::getProfissao() const {
    return profissao;
}

void Profissional::mostrarProfissao() const {
    std::cout << "Profissão: " << profissao << std::endl;
}
