#include<iostream>
#include<vector>
using namespace std;

int main(){

    int numero, inicial, comparacao = 0, i = 1, digito;
    vector<int> vetor;
    cin>>numero;
    inicial = numero;

    while(numero != 0){
        digito = numero % 10;
        numero /= 10;
        vetor.push_back(digito);
    }

    for(int j = vetor.size() - 1; j >= 0; j--){
        comparacao += vetor[j] * i;
        i *= 10;
    }        

    if(inicial == comparacao)
        cout<<"Palíndromo."<<endl;
    else
        cout<<"Não palíndromo."<<endl;

    return 0;
}