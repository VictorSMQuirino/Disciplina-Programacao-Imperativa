#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Aluno.cpp"
using namespace std;

class BancoDeDados{
    public:
        static bool salvarDados(vector<Aluno>, string);
        static vector<string> recuperarDados(string);
        static bool alterarDados(string);
};


bool BancoDeDados::salvarDados(vector<Aluno> alunos, string nomeArquivo){
    ofstream arquivo;
    arquivo.open(nomeArquivo, ios_base::out);

    if(arquivo.is_open()){
        for(Aluno aluno : alunos){
            arquivo<<aluno.getNome()<<", "
                <<aluno.getEmail()<<", "
                <<to_string(aluno.getNota1())<<", "
                <<to_string(aluno.getNota2())<<endl;
        }

        arquivo.close();
        return true;
    } else return false;
}

vector<string> BancoDeDados::recuperarDados(string nomeArquivo){
    ifstream arquivo;
    arquivo.open(nomeArquivo, ios_base::in);
    vector<string> conteudo;
    string token;

    if(arquivo.is_open()){
        string linha;
        while(!arquivo.eof()){
            getline(arquivo, linha);
            istringstream ss(linha);

            while(getline(ss, token, ',')){
                conteudo.push_back(token);
            }

            conteudo.push_back("\n");
        }
    } else cout<<"Erro ao abrir arquivo!"<<endl;

    return conteudo;
}

static bool alterarDados(string nomeArquivo){
    //vector<string> arquivo = BancoDeDados::recuperarDados(nomeArquivo);

    ofstream arquivo;
    //arquivo.app();
    //arquivo.open(nomeArquivo, );
}
