#include<iostream>
using namespace std;

int main(){

    int numero, divisores = 0;
    cout<<"Digite um numero inteiro: ";
    cin>>numero;

    for(int i = 1; i < numero; i++)
        if(numero % i == 0)
            divisores += i;

    if(divisores == numero)
        cout<<numero<<"e um numero perfeito."<<endl;
    else
        cout<<" nao e um numero perfeito."<<endl;

    return 0;
}