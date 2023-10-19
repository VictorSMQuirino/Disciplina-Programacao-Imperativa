#include "clienteController.h"

using namespace std;

void clienteController::criarCliente(vector<Cliente> &clientes){
    string habilitacao, cpf, nome, endereco, telefone;
    //vector<Aluguel> alugueis;

    cout<<"cpf: ";
    cin>>cpf;
    if(existeClienteComCpf(cpf, clientes)){
        do{
            cout<<"Ja existe um cliente com este cpf, digite outro: ";
            cin>>cpf;
        } while(existeClienteComCpf(cpf, clientes));
    }
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Endereco: ";
    cin>>endereco;
    cout<<"Telefone: ";
    cin>>telefone;
    cout<<"Nº de habilitacao: ";
    cin>>habilitacao;
    if(existeClienteComHabilitacao(habilitacao, clientes)){
        do{
            cout<<"Ja existe um cliente com este numero de habilitacao, digite outro: ";
            cin>>habilitacao;
        } while(existeClienteComHabilitacao(habilitacao, clientes));
    }

    Cliente cliente = Cliente(cpf, nome, endereco, telefone, habilitacao);
    clientes.push_back(cliente);
}

void clienteController::excluirCliente(vector<Cliente> &clientes){
    string cpf;
    cout<<"Digite o cpf do cliente: ";
    cin>>cpf;

    if(!existeClienteComCpf(cpf, clientes)) cout<<"\nNao existe cliente cadastrado com este cpf!"<<endl;
    else{
        int posicaoCliente = localizaClientePorCpf(cpf, clientes);
        clientes.erase(clientes.begin() + posicaoCliente);
    }
}

bool clienteController::existeClienteComCpf(string cpf, vector<Cliente> &clientes){
    for(Cliente &cliente : clientes)
        if(cliente.getCpf() == cpf) return true;

    return false;
}

bool clienteController::existeClienteComHabilitacao(string habilitacao, vector<Cliente> &clientes){
    for(Cliente &cliente : clientes)
        if(cliente.getHabilitacao() == habilitacao) return true;

    return false;
}

int clienteController::localizaClientePorCpf(string cpf, vector<Cliente> &clientes){
    for(int i = 0; i < clientes.size(); i++){
        if(clientes[i].getCpf() == cpf) return i;
    }

    return -1;
}

Aluguel clienteController::alugarVeiculo(int quantidadeAlugueis, Cliente &cliente, Veiculo &veiculo, Data dataInicio, Data dataTermino){
    if(veiculo.getEstaAlugado()){
        cout<<"\nEste veiculo ja esta alugado! Tente outro..."<<endl;
        return;
    }

    Aluguel aluguel = Aluguel("asdf", veiculo, cliente, dataInicio, dataTermino, dataTermino);
}