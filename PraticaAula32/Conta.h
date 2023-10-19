#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <vector>
#include <iostream>
#include "Transacao.h"

using namespace std;

class Conta{
    private:
        int numeroConta;
        string nomeCorrentista;
        float saldo;
        vector<Transacao> transacoes;
    public:
        void deposito(float);
        void retirada(float);
        virtual void imprimirExtrato() const = 0;
        int getNumeroConta();
        string getNomeCorrentista();
        float getSaldo();
        vector<Transacao> getTransacoes();
        void setNomeCorrentista(string);
};

#endif