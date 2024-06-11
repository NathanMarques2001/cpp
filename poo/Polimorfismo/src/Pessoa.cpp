#include "../Headers/Pessoa.h"
#include <iostream>

Pessoa::Pessoa(const std::string& nome, int idade)
    : nome(nome), idade(idade) {}

Pessoa::~Pessoa() {}

std::string Pessoa::getNome() const {
    return nome;
}

int Pessoa::getIdade() const {
    return idade;
}

void Pessoa::mostrarInformacoes() const {
    std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
}
