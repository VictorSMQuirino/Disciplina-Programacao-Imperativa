#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Empregado{
    string nome, sobrenome, RG;
    int ano_nascimento, ano_de_admissao;
    double salario;
};

void reajusta_dez_porcento(vector<Empregado> &, int);
bool verifica_idade(int, int);

int main(){

    vector<Empregado> empregados(50);

    int i = 1;
    for(Empregado &empregado : empregados){
        cout<<"----------------"<<endl;
        cout<<"Empregado "<<i<<endl;
        i++;
        cout<<"Primeiro nome: ";
        cin>>empregado.nome;
        cout<<"Sobrenome: ";
        cin>>empregado.sobrenome;
        cout<<"Numero de RG: ";
        cin>>empregado.RG;
        cout<<"Ano de nascimento: ";
        cin>>empregado.ano_nascimento;
        cout<<"Ano de admissao: ";
        cin>>empregado.ano_de_admissao;
        if(!verifica_idade(empregado.ano_nascimento, empregado.ano_de_admissao)){
            do{
                cout<<"Um empregado precisa ser maior de idade para ser contratado! Tente novamente:"<<endl;
                cout<<"Ano de nascimento: ";
                cin>>empregado.ano_nascimento;
                cout<<"Ano de admissao: ";
                cin>>empregado.ano_de_admissao;
            } while(!verifica_idade(empregado.ano_nascimento, empregado.ano_de_admissao));
        }
        cout<<"Salario: ";
        cin>>empregado.salario;
        
    }

    reajusta_dez_porcento(empregados, empregados.size());

    for(Empregado empregado : empregados){
        cout<<"Novo salario de "<<empregado.nome<<' '<<empregado.sobrenome<<" apos reajuste: ";
        cout<<empregado.salario<<endl;
    }
    return 0;
}

bool verifica_idade(int ano_nascimento, int ano_admissao){
    if(ano_admissao - ano_nascimento < 18) return false;
    return true;
}

void reajusta_dez_porcento(vector<Empregado> &empregados, int quantidade){
    for(int i = 0; i < quantidade; i++){
        empregados[i].salario *= 1.10;
    }
}

