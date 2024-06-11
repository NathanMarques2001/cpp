#ifndef PROFISSIONAL_H
#define PROFISSIONAL_H

#include <string>

class Profissional {
protected:
    std::string profissao;

public:
    Profissional(const std::string& profissao);
    virtual ~Profissional();

    std::string getProfissao() const;
    virtual void mostrarProfissao() const;
};

#endif // PROFISSIONAL_H
