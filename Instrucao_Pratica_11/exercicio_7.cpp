#include <iostream>
using namespace std;

void multiplica_por_n(int *vet, int qtde, int n);

int main(){

    int vetor[] = {0, 1, 2, 3, 4, 5, 6};    
    int qtde = 7;
    int mutiplicador = 3;

    cout<<"Vetor original:"<<endl;
    for(int i = 0; i < qtde; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

    multiplica_por_n(vetor, qtde, mutiplicador);

    cout<<"Vetor multiplicado por "<<mutiplicador<<":"<<endl;
    for(int i = 0; i < qtde; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

    return 0;
}

void multiplica_por_n(int *vet, int qtde, int n){
    for(int i = 0; i < qtde; i++){
        vet[i] *= n;
    }
}