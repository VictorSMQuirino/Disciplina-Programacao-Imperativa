#include <iostream>
#include <string>
#include "Senha.cpp"
using namespace std;

int main(){

    cout<<"Digite a senha: ";
    string senha;
    cin>>senha;

    if(!Senha::validar_senha(senha)) cout<<"Senha invalida!"<<endl;
    else cout<<"Senha valida!"<<endl;

    cout<<"Senha gerada automaticamente: "<<Senha::gerar_senha()<<endl;

    return 0;
}