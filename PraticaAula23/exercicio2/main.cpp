#include <iostream>
#include "Circulo.cpp"
#include "Retangulo.h"
using namespace std;

int main(){

    Circulo circulo(4.00);
    Retangulo retangulo(2.50, 2.85);

    cout<<"Area do circulo: "<<circulo.calcularArea()<<endl;
    cout<<"Area do retangulo: "<<retangulo.calcularArea()<<endl;

    return 0;
}