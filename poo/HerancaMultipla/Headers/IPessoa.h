#ifndef IPESSOA_H
#define IPESSOA_H

class IPessoa {
public:
    virtual ~IPessoa() {}
    virtual void mostrarInformacoes() const = 0;  // Método virtual puro
};

#endif // IPESSOA_H
