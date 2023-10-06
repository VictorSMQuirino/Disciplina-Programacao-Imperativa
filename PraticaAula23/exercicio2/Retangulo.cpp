#include "Retangulo.h"

Retangulo::Retangulo(float altura, float largura){
    this->altura = altura;
    this->largura = largura;
};

float Retangulo::calcularArea(){
    return this->altura * this->largura;
}
