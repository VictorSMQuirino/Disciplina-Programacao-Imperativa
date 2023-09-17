#include<iostream>
using namespace std;

bool primo(int numero){
    int contador = 0;
    for(int i = 1; i <= numero / 2; i ++){
        if(numero % i == 0)
            contador++;
    }

    if(contador > 1)
        return false;

    return true;
}

int main(){

    cout<<"Numeros primos de 1 a 100:"<<endl;
    for(int i = 1; i <= 100; i++){
        if(primo(i))
            cout<<i<<endl;
    }

    return 0;
}