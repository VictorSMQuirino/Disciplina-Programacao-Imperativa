#include "Forma.h"

#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : Forma{
    private:
        float raio;
    public:
        Circulo(float);

        float calcularArea();
};

#endif