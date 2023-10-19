#include "Cliente.h"

Cliente::Cliente(){

}

Cliente::Cliente(string cpf, string nome, string endereco, string telefone, string habilitacao) : Usuario(cpf, nome, endereco, telefone){
    this->habilitacao = habilitacao;
    //this->historicoAlugueis = historicoAlugueis;
}

string Cliente::getHabilitacao(){
    return this->habilitacao;
}

float Cliente::cotarAluguel(Veiculo veiculo, Data inicio, Data termino){
    if(veiculo.getEstaAlugado()) return -1;

    return Data::diasPassadosEntreDatas(inicio, termino) * veiculo.getPrecoPorDia();
}

Aluguel Cliente::solicitarAluguel(Veiculo &veiculo, Data inicio, Data termino){
    if(veiculo.getEstaAlugado()){
        return Aluguel();
    }

    veiculo.setEstaAlugado(true);
    Aluguel aluguel = Aluguel();
}