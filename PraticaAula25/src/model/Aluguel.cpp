#include "Aluguel.h"

Aluguel::Aluguel(){
    
}

Aluguel::Aluguel(string identificador, Veiculo veiculo, Cliente cliente, Funcionario funcionario, Data dataInicio, Data dataTermino){
    this->identificador = identificador;
    this->veiculo = veiculo;
    this->cliente = cliente;
    this->funcionario = funcionario;
    this->dataInicio = dataInicio;
    this->dataTermino = dataTermino;
    // this->dataDevolucao = dataDevolucao;
}

float Aluguel::calcularValorFinal(){
    return Data::diasPassadosEntreDatas(dataInicio, dataTermino) * this->veiculo.getPrecoPorDia();
}

string Aluguel::verificaStatus(){
    Data atual = Data::atual();

    if(Data::diasPassadosEntreDatas(atual, this->dataInicio) < 0)
        return "Agendado";

    if(Data::diasPassadosEntreDatas(atual, this->dataInicio) > 0 && 
        Data::diasPassadosEntreDatas(atual, this->dataTermino) < 0)
            return "Iniciado";

    if(Data::diasPassadosEntreDatas(this->dataTermino, this->dataDevolucao) > 0)
        return "Atrasado";

    if(Data::diasPassadosEntreDatas(this->dataDevolucao, this->dataTermino ) > 0)
        return "Finalizado";
}

Veiculo Aluguel::getVeiculo(){
    return this->veiculo;
}

Cliente Aluguel::getCliente(){
    return this->cliente;
}

Funcionario Aluguel::getFuncionario(){
    return this->funcionario;
}

Data Aluguel::getDataInicio(){
    return this->dataInicio;
}

Data Aluguel::getDataTermino(){
    return this->dataTermino;
}

Data Aluguel::getDataDevolucao(){
    return this->dataDevolucao;
}

void Aluguel::setIdentificador(int n){
    this->identificador = "ABCDEFGHIJKLMN" + n;
}

void Aluguel::setDataDevolucao(Data dataDevolucao){
    this->dataDevolucao = dataDevolucao;
}