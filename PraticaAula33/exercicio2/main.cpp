#include "Triangulo.cpp"
#include "Retangulo.cpp"
#include "Circulo.cpp"

int main(){
    Triangulo t;
    Retangulo r;
    Circulo c;

    t.desenhar();
    cout<<"\n";
    r.desenhar();
    cout<<"\n";
    c.desenhar();
}