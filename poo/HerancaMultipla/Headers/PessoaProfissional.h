#ifndef PESSOAPROFISSIONAL_H
#define PESSOAPROFISSIONAL_H

#include "IPessoa.h"
#include "Profissional.h"
#include <string>

class PessoaProfissional : public IPessoa, public Profissional {
protected:
    std::string nome;
    int idade;

public:
    PessoaProfissional(const std::string& nome, int idade, const std::string& profissao);
    virtual ~PessoaProfissional();

    std::string getNome() const;
    int getIdade() const;
    void mostrarInformacoes() const override;
    void mostrarProfissao() const override;
};

#endif // PESSOAPROFISSIONAL_H
