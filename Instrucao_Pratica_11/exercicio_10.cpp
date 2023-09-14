#include <iostream>
#include <string>
using namespace std;

int* contaLetra(string palavra, char letra, int &quantidade);

int main(){

    string palavra; 
    char letra;
    cout << "Digite uma palavra: ";
    getline(cin, palavra);
    cout<<"Digite uma letra para verificar quantas vezes aparece na palavra "<<palavra<<endl;
    cin>>letra;

    int quantidade = 0;
    int *conta = contaLetra(palavra, letra, quantidade);
    cout<<"A letra "<<letra<<" apareceu "<<quantidade<<" vezes e nos inidices: "<<endl;
    for(int i = 0; i < palavra.length(); i++){
        if(conta[i] == 1)
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

int* contaLetra(string palavra, char letra, int &quantidade){
    int* indices = new int[palavra.size()];

    for(int i = 0; i < palavra.length(); i++){
        if(palavra.at(i) == letra){
            indices[i] = 1;
            quantidade++;
        }
        else
            indices[i] = 0;
    }

    return indices;
}