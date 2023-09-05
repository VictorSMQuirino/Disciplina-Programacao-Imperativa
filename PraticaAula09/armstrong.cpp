#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int numero, armstrong = 0;
    cin>>numero;
    int inicial = numero;

    while(numero != 0){
        int digito = numero % 10;
        numero /= 10;
        armstrong += pow(digito, 3);
    }

    if(inicial == armstrong)
        cout<<"Eh armstrong"<<endl;
    else
        cout<<"Nao eh armstrong"<<endl;

    return 0;
}