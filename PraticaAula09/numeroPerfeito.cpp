#include<iostream>
using namespace std;

int main(){

    int numero, divisores = 0;
    cin>>numero;

    for(int i = 1; i < numero; i++)
        if(numero % i == 0)
            divisores += i;

    if(divisores == numero)
        cout<<"Número perfeito."<<endl;
    else
        cout<<"Número imperfeito."<<endl;

    return 0;
}