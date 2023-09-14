#include <iostream>
using namespace std;

int conta_primos (int *vet, int qtde);

int main(){

    int vetor[100];
    for(int i = 0; i < 100; i++){
        vetor[i] = i + 1;
    }

    cout<<"Há "<<conta_primos(vetor, 100)<<" numeros primos entre 1 e 100"<<endl;

    return 0;
}

int conta_primos (int *vet, int qtde){
    int primos = 0;

    for(int i = 0; i < qtde; i++){
        int divisores = 0;
        for(int j = 1; j <= vet[i] / 2; j++){
            if(vet[i] % j == 0){
                divisores++;
            }
        }
        if(divisores <= 2)
            primos++;
    }

    return primos;
}