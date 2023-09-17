#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){

    int numero, armstrong = 0;
    cout<<"Digite um numero inteiro: ";
    cin>>numero;
    vector<int> digitos;
    int inicial = numero;

    //Pega a quantidade de digitos do numero.
    while(numero != 0){
        int digito = numero % 10;
        digitos.push_back(digito);
        numero /= 10;
    }

    //Realiza a exponenciação dos dígitos do número pela quantidade de dígitos
    //e incrementa à variável armstrong
    for(int i = 0; i < digitos.size(); i++) 
        armstrong += pow(digitos[i], digitos.size());

    if(inicial == armstrong)
        cout<<"Eh armstrong"<<endl;
    else
        cout<<"Nao eh armstrong"<<endl;

    return 0;
}