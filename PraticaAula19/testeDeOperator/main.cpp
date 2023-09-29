#include <iostream>
#include "meuInt.cpp"
using namespace std;

int main(){

    MeuInt num1, num2, num3;
    num1 = 15;
    num2 = 8;
    num3 = 0;
    int result = num3 + num2;
    num3 = num2;
    int result2 = num1 + 10;

    cout<<"Valor de num1 = "<<num1.getNumero()<<endl;
    cout<<"Valor de num2 = "<<num2.getNumero()<<endl;
    cout<<"Valor de num3 = "<<num3.getNumero()<<endl;
    cout<<"Soma = "<<num1 + num2<<endl;
    cout<<"Valor da soma de num3 e num2 = "<<result<<endl;
    cout<<"Valor de da soma de num1 + 10 = "<<result2<<endl;

    return 0;
}