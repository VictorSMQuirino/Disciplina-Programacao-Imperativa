#include "Funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::Funcionario(string cpf, string nome, string endereco, string telefone) : Usuario(cpf, nome, endereco, telefone){

}

vector<Aluguel> Funcionario::getHistoricoAlugueis(){
    return this->historicoAlugueis;
}

Aluguel Funcionario::alugarVeiculo(Cliente &cliente, Veiculo &veiculo, Data dataInicio, Data dataTermino){
    return Aluguel("xpto", veiculo, cliente, *this, dataInicio, dataTermino);
}

void Funcionario::finalizarAluguel(Aluguel &aluguel, Data dataDevolucao){
    aluguel.setDataDevolucao(dataDevolucao);
    aluguel.getVeiculo().setEstaAlugado(false);
}