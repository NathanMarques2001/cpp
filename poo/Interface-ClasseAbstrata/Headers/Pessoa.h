#ifndef PESSOA_H
#define PESSOA_H

#include "IPessoa.h"
#include <string>

class Pessoa : public IPessoa {
protected:
    std::string nome;
    int idade;

public:
    Pessoa(const std::string& nome, int idade);
    virtual ~Pessoa();  // Destrutor virtual

    std::string getNome() const;
    int getIdade() const;
    void mostrarInformacoes() const override;  // Método virtual puro sobrescrito
};

#endif // PESSOA_H
