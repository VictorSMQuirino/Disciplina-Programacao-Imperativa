#include <iostream>
using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main(){

    int tamanho, maximo, minimo;
    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>tamanho;
    int vetor[tamanho];
    for(int i = 0 ; i < tamanho; i++){
        cout<<"Valor: "<<i+1<<": ";
        cin>>vetor[i];
    }

    maxmin(vetor, tamanho, maximo, minimo);
    cout<<"Valor maximo do vetor: "<<maximo<<endl;
    cout<<"Valor minimo do vetor: "<<minimo<<endl;

    return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo){
    maximo = vetor[0];
    minimo = vetor[0];

    for(int i = 1; i < n; i++){
        if(vetor[i] > maximo){
            maximo = vetor[i];
        }
        else if(vetor[i] < minimo){
            minimo = vetor[i];
        }
    }
}