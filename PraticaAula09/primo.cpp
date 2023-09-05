#include<iostream>
using namespace std;

bool primo(int numero){
    int contador = 0;
    for(int i = 1; i <= numero; i ++){
        if(numero % i == 0)
            contador++;
    }

    if(contador > 2)
        return false;

    return true;
}


int main(){

    for(int i = 1; i <= 100; i++){
        if(primo(i))
            cout<<i<<endl;
    }

    return 0;
}