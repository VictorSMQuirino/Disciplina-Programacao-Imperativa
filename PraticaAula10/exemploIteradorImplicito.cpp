#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

    vector<int> vetor;
    int contador = 0;
    char pergunta;

    do{
        cout<<"Digite um valor inteiro: ";
        int valor;
        cin>>valor;
        vetor.push_back(valor);
        contador += valor;
        cout<<"Deseja inserir mais um valor? (Digite s para sim ou qualquer caractere diferente para não): ";
        cin>>pergunta;
    } while(pergunta == 's');

    cout<<"VALORES:"<<endl;

    cout<<endl;
    for(int x : vetor){
        cout<<x<<" ";
    }
    cout<<endl;

    double media = (double) contador / vetor.size();
    cout<<"Média dos valores do vetor: "<<fixed<<setprecision(2)<<media<<endl;

    return 0;
}