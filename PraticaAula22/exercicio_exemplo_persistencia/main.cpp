#include <iostream>
#include <string>
#include <vector>
#include "BancoDeDados.cpp"
using namespace std;

int main(){
    vector<string> conteudo;
    cout<<"Digite o conteudo do arquivo: "<<endl;

    int i = 0;
    do{
        string linha;
        getline(cin,linha);
        conteudo.push_back(linha);
        i++;
    } while(i < 10);

    if(BancoDeDados::salvarDados(conteudo)){
        cout<<"\nConteudo do arquivo: "<<endl;
        vector<string> conteudoLido = BancoDeDados::recuperarDados();

        for(string linha : conteudoLido){
            cout<<linha<<endl;
        }
    } else cout<<"Erro ao abrir arquivo!"<<endl;

    return 0;
}