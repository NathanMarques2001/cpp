#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "Pessoa.h"

class Estudante : public Pessoa {
private:
    std::string curso;

public:
    Estudante(const std::string& nome, int idade, const std::string& curso);
    ~Estudante();

    std::string getCurso() const;
    void mostrarInformacoes() const override;
};

#endif // ESTUDANTE_H
