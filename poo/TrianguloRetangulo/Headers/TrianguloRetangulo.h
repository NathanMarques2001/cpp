#ifndef TRIANGULO_RETANGULO_H
#define TRIANGULO_RETANGULO_H

#include <cmath>
#include "../../Triangulo/Triangulo.h"

class TrianguloRetangulo : public Triangulo {
private:

protected:

public:
    bool trianguloValido2();
    float area2();
    double hipotenusa();
    double cateto(float);
}
#endif
