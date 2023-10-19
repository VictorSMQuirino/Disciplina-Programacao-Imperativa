#include "interfaceController.h"

int menuPrincipal(){
    cout<<"####### MENU PRINCIPAL #######"<<endl;
    cout<<"1 - Gestao de Clientes"<<endl;
    cout<<"2 - Gestao de Funcionarios"<<endl;
    cout<<"3 - Gestao de Veiculos"<<endl;
    cout<<"4 - Gestao de Alugueis"<<endl;

    cout<<"\nDigite uma opcao: ";
    int opcao;
    cin>>opcao;
    return opcao;
}

int menuCliente(){
    cout<<"####### CLIENTES #######"<<endl;
    cout<<"1 - Incluir cliente"<<endl;
    cout<<"2 - Excluir cliente"<<endl;
    cout<<"3 - Alterar cliente"<<endl;
    cout<<"4 - Listar clientes"<<endl;
    cout<<"0 - Voltar ao menu principal"<<endl;

    cout<<"\nDigite uma opcao: ";
    int opcao;
    cin>>opcao;
    return opcao;
}

int menuFuncionario(){
    cout<<"####### FUNCIONARIOS #######"<<endl;
    cout<<"1 - Incluir funcionario"<<endl;
    cout<<"2 - Excluir funcionario"<<endl;
    cout<<"3 - Alterar funcionario"<<endl;
    cout<<"4 - Listar funcionarios"<<endl;
    cout<<"0 - Voltar ao menu principal"<<endl;

    cout<<"\nDigite uma opcao: ";
    int opcao;
    cin>>opcao;
    return opcao;
}