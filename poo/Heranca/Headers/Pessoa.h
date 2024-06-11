#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
protected:
    std::string nome;
    int idade;

public:
    Pessoa(const std::string& nome, int idade);
    virtual ~Pessoa();

    std::string getNome() const;
    int getIdade() const;
    virtual void mostrarInformacoes() const;
};

#endif // PESSOA_H
