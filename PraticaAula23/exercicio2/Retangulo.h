#include "Forma.h"

#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : Forma{
    private:
        float altura, largura;
    public:
        Retangulo(float, float);

        float calcularArea();
};

#endif