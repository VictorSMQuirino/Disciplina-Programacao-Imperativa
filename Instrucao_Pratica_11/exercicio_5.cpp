#include <iostream>
using namespace std;

int insere_meio( int *vetor, int qtde, int elemento);

int main(){
    int tamanho;
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;
    int vetor[tamanho], elemento;

    for(int i = 0; i < tamanho; i++){
        cout<<"Valor da posicao "<<i+1<<" : ";
        cin>>vetor[i];
    }
    cout<<"Valor para inserir no meio: ";
    cin>>elemento;

    int x = insere_meio(vetor, tamanho, elemento);

    cout<<"Novo vetor:"<<endl;
    for(int i = 0; i <= tamanho; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;

    return 0;
}

int insere_meio( int *vetor, int qtde, int elemento){
    int posicaoMeio = qtde / 2;

    for(int i = qtde; i > posicaoMeio; i--){
        vetor[i] = vetor[i - 1];
    }    

    vetor[posicaoMeio] = elemento;

    return 1;
}
