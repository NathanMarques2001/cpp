#include "../Headers/Pessoa.h"
#include "../Headers/Estudante.h"
#include "../Headers/Professor.h"
#include <iostream>

void mostrarInformacoesPessoa(const IPessoa& pessoa) {
    pessoa.mostrarInformacoes();
}

int main() {
    IPessoa* pessoa = new Pessoa("João", 45);
    IPessoa* estudante = new Estudante("Maria", 21, "Engenharia");
    IPessoa* professor = new Professor("Carlos", 50, "Matemática");

    mostrarInformacoesPessoa(*pessoa);
    mostrarInformacoesPessoa(*estudante);
    mostrarInformacoesPessoa(*professor);

    delete pessoa;
    delete estudante;
    delete professor;

    return 0;
}
