#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class BancoDeDados{
    public:
        static bool salvarDados(vector<string>);
        static vector<string> recuperarDados();
};

bool BancoDeDados::salvarDados(vector<string> dados){
    ofstream arquivo;
    arquivo.open("exemplo.txt", ios_base::out);

    if(arquivo.is_open()){
        for(string linha : dados){
            arquivo<<linha<<endl;
        }

        arquivo.close();
        return true;
    } else return false;
}

vector<string> BancoDeDados::recuperarDados(){
    ifstream arquivo;
    arquivo.open("exemplo.txt", ios_base::in);
    vector<string> dados;

    if(arquivo.is_open()){
        string linha;
        while(!arquivo.eof()){
            getline(arquivo, linha);
            dados.push_back(linha);
        }

        arquivo.close();
    } else {
        cout<<"Erro ao abrir arquivo"<<endl;
    }

    return dados;
}