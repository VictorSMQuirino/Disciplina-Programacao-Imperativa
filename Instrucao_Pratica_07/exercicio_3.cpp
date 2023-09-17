#include<iostream>
using namespace std;

int main(){

    int numero;
    cout<<"Digite um numero inteiro: ";
    cin>>numero;
    cout<<"Divisores de "<<numero<<": "<<endl;

    for(int i = 1; i <= numero / 2; i++){
        if(numero % i == 0)
            cout<<i<<endl;
    }

    return 0;
}