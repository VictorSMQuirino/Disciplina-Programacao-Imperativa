#include <iostream>
#include "Contador.cpp"
using namespace std;

int main(){

    Contador contador1;
    Contador contador2;

    cout<<"Numero de instancias da classe Contador = "<<Contador::getContador()<<endl;

    return 0;
}