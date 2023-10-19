#ifndef CONTA_H
#define CONTA_H
#include <string>

using namespace std;

class Conta{
    private:
        int numeroConta;
        string nomeCorrentista;
        float saldo;
    public:
        virtual void deposito();
        virtual double retirada();
        virtual void imprimirExtrato() const = 0;
};

#endif