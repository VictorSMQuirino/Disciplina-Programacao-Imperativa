#include<iostream>
using namespace std;

int main(){

    int numero;
    cout<<"Digite um numero inteiro para indicar a altura do padrão: ";
    cin>>numero;

    for(int i = 0; i < numero; i++){
        for(int j = 0; j < numero; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 0; i < numero; i ++){
        for(int j = 0; j < i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i = 0; i < numero; i++){
        for(int j = 0; j < numero; j ++){
            if(i == 0 || j == 0 || i == numero-1 || j == numero-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}