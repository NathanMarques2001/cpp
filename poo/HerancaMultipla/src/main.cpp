#include "../Headers/PessoaProfissional.h"
#include <iostream>

void mostrarInformacoesPessoa(const IPessoa& pessoa) {
    pessoa.mostrarInformacoes();
}

int main() {
    PessoaProfissional* pp = new PessoaProfissional("Ana", 30, "Engenheira de Software");

    mostrarInformacoesPessoa(*pp);

    delete pp;

    return 0;
}