#include "Conta.h"

void Conta::deposito(float valor){
    this->saldo += valor;
}

void Conta::retirada(float valor){
    if(this->saldo >= valor) this->saldo -= valor;
    else cout<<"Saldo insuficiente!"<<endl;
}

int Conta::getNumeroConta(){
    return this->numeroConta;
}

string Conta::getNomeCorrentista(){
    return this->nomeCorrentista;
}

float Conta::getSaldo(){
    return this->saldo;
}

vector<Transacao> Conta::getTransacoes(){
    return this->transacoes;
}

void Conta::setNomeCorrentista(string nome){
    this->nomeCorrentista = nome;
}