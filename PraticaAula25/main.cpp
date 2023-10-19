#include <iostream>
#include <vector>
#include "model/Cliente.h"
#include "controller/interfaceController.cpp"

using namespace std;

int main(){

    int opcao, opcao2;

    do{
        opcao = menuPrincipal();

        switch(opcao){
            case 0:
                break;
            case 1:
                do{
                    opcao2 = menuCliente();

                    switch(opcao2){
                        case 0:
                            break;
                        case 1:
                            break;
                        default:
                            cout<<"Opcao invalida! Tente novamente...";
                            break;
                    }
                } while(opcao2 != 0);
                break;
            case 2:
                opcao2 = menuFuncionario();
                break;
            default:
                cout<<"Opcao invalida! Tente novamente...";
                break;
        }

    } while(opcao != 0);
    return 0;
}

