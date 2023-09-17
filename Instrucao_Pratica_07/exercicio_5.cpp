#include<iostream>
using namespace std;

int main(){

    srand(time(NULL));
    int numero = rand() % 101;
    int resposta;
    
    cout<<"************************************"<<endl;
    cout<<"JOGO DE ADIVINHAR UM NUMERO INTEIRO"<<endl;
    cout<<"************************************"<<endl<<endl;

    do{
        cout<<"Tentativa: ";
        cin>>resposta;

        cout<<"Resultado: ";
        if(resposta > numero)
            cout<<"Está alto."<<endl;
        else if(resposta < numero)
            cout<<"Está baixo."<<endl;
        else 
            cout<<"Correto!"<<endl;

        cout<<endl;
    } while(resposta != numero);

    return 0;
}