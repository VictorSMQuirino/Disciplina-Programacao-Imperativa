#include "Transacao.h"

string Transacao::getData(){
    return this->data;
}

float Transacao::getValor(){
    return this->valor;
}

string Transacao::getDescricao(){
    return this->descricao;
}

void Transacao::setData(string data){
    this->data = data;
}

void Transacao::setValor(float valor){
    this->valor = valor;
}

