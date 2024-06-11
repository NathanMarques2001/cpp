#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa {
private:
    std::string departamento;

public:
    Professor(const std::string& nome, int idade, const std::string& departamento);
    ~Professor();

    std::string getDepartamento() const;
    void mostrarInformacoes() const override;  // Sobrescrita do método
};

#endif // PROFESSOR_H
