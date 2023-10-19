#ifndef ALUGUEL_H
#define ALUGUEL_H
#include <string>
#include "Data.h"
#include "Veiculo.h"
#include "Cliente.h"
#include "Funcionario.h"

using namespace std;

class Aluguel{
    private:
        string identificador;
        Veiculo veiculo;
        Cliente cliente;
        Funcionario funcionario;
        Data dataInicio, dataTermino, dataDevolucao;
    public:
        Aluguel();
        Aluguel(string, Veiculo, Cliente, Funcionario, Data, Data);
        float calcularValorFinal();
        string verificaStatus();
        Veiculo getVeiculo();
        Cliente getCliente();
        Funcionario getFuncionario();
        Data getDataInicio();
        Data getDataTermino();
        Data getDataDevolucao();
        void setIdentificador(int);
        void setDataDevolucao(Data);
};

#endif