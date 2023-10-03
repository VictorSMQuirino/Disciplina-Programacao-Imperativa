#include <iostream>
#include "Calculadora.cpp"
using namespace std;

int main(){
    double numero1, numero2;
    cout<<"Digite dois valores: ";
    cin>>numero1>>numero2;
    cout<<"Operacao:"<<endl;
    char operacao;
    cin>>operacao;

    cout<<"Resultado = ";
    switch (operacao){
        case '+':
            cout<<Calculadora::soma(numero1,numero2)<<endl;
            break;

        case '-':
            cout<<Calculadora::subtracao(numero1,numero2)<<endl;
            break;

        case '*':
            cout<<Calculadora::multiplicacao(numero1,numero2)<<endl;
            break;
        
        case '/':
            if(numero2 == 0) cout<<"Impossivel dividir por 0"<<endl;
            else cout<<Calculadora::divisao(numero1,numero2)<<endl;
            break;

        default:
            cout<<"Operacao invalida!"<<endl;
            break;
    }

    return 0;
}