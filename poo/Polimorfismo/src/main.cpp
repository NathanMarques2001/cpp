#include "../Headers/Pessoa.h"
#include "../Headers/Estudante.h"
#include "../Headers/Professor.h"
#include <iostream>

void mostrarInformacoesPessoa(const Pessoa& pessoa) {
    pessoa.mostrarInformacoes();
}

int main() {
    Pessoa* pessoa = new Pessoa("João", 45);
    Estudante* estudante = new Estudante("Maria", 21, "Engenharia");
    Professor* professor = new Professor("Carlos", 50, "Matemática");

    mostrarInformacoesPessoa(*pessoa);
    mostrarInformacoesPessoa(*estudante);
    mostrarInformacoesPessoa(*professor);

    delete pessoa;
    delete estudante;
    delete professor;

    return 0;
}
