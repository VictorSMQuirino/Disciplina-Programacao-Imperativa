#include "Veiculo.h"

Veiculo::Veiculo(){
    
}

Veiculo::Veiculo(string identificador, string marca, string modelo, int anoFabricacao, float precoPorDia){
    this->identificador = identificador;
    this->marca = marca;
    this->modelo = modelo;
    this->anoFabricacao = anoFabricacao;
    this->precoPorDia = precoPorDia;
    this->estaAlugado = false;
}

string Veiculo::getIdentificador(){
    return this->identificador;
}

string Veiculo::getMarca(){
    return this->marca;
}

string Veiculo::getModelo(){
    return this->modelo;
}

int Veiculo::getAnoFabricacao(){
    return this->anoFabricacao;
}

float Veiculo::getPrecoPorDia(){
    return this->precoPorDia;
}

bool Veiculo::getEstaAlugado(){
    return this->estaAlugado;
}

void Veiculo::setEstaAlugado(bool valor){
    this->estaAlugado = valor;
}