#include "../Headers/PessoaProfissional.h"
#include <iostream>

PessoaProfissional::PessoaProfissional(const std::string& nome, int idade, const std::string& profissao)
    : Profissional(profissao), nome(nome), idade(idade) {}

PessoaProfissional::~PessoaProfissional() {}

std::string PessoaProfissional::getNome() const {
    return nome;
}

int PessoaProfissional::getIdade() const {
    return idade;
}

void PessoaProfissional::mostrarInformacoes() const {
    std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
    mostrarProfissao();
}

void PessoaProfissional::mostrarProfissao() const {
    Profissional::mostrarProfissao();
}