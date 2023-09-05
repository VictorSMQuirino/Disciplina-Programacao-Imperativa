#include<iostream>
using namespace std;

int main(){

    srand(time(NULL));
    int numero = rand() % 101;
    int resposta;
    
    do{
        cin>>resposta;

        if(resposta > numero)
            cout<<"Está alto."<<endl;
        else if(resposta < numero)
            cout<<"Está baixo."<<endl;
        else 
            cout<<"Correto!"<<endl;
    } while(resposta != numero);

    

    return 0;
}