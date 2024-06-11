#include "../Headers/Pessoa.h"
#include "../Headers/Estudante.h"
#include <iostream>

int main() {
    Pessoa pessoa("João", 45);
    Estudante estudante("Maria", 21, "Engenharia");

    pessoa.mostrarInformacoes();
    estudante.mostrarInformacoes();

    return 0;
}
