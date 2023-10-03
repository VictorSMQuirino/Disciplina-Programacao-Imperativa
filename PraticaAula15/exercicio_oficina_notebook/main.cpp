#include <iostream>
#include <vector>
#include <string>
using namespace std;

int menu();

int main(){

    int opcao, opcao2;

    do{
        opcao = menu();

        switch (opcao){
            case 1:
                do{

                } while(opcao2 != 0);

                break;
            
            default:
                break;
        }
    } while(opcao != 0);



    return 0;
}

int menu(){

    cout<<"********************************"<<endl;
    cout<<"1 - Gestao de Clientes"<<endl;
    cout<<"2 - Gestão de Pedidos"<<endl;
    cout<<"3 - Gestão de Orcamentos"<<endl;
    cout<<"0 - Encerrar programa"<<endl;

    int opcao;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}