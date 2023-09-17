#include<iostream>
using namespace std;

int main(){

    int altura;
    char caractere = 65;
    cout<<"Digite um numero inteiro para indicar a altura do padrao: ";
    cin>>altura;

    cout<<"Padrão: "<<endl;
    for(int i = 0; i < altura; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<caractere;
            caractere++;
        }
        cout<<endl;
    }

    return 0;
}