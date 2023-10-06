#include "Circulo.h"

Circulo::Circulo(float raio){
    this->raio = raio;
}

float Circulo::calcularArea(){
    return 3.14 * this->raio * this->raio;
}
