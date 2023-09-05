#include<iostream>
using namespace std;

int main(){

    int numero;
    cin>>numero;

    for(int i = 1; i <= numero / 2; i++){
        if(numero % i == 0)
            cout<<i<<endl;
    }

    return 0;
}