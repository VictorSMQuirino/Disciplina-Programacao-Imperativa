#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n == 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    
    int numero, i = 1;
    cout<<"Digite um numero inteiro: ";
    cin>>numero;

    cout<<"Sequencia de fibonacci ate "<<numero<<":"<<endl;
    while(fibonacci(i) <= numero){
        cout<<fibonacci(i)<<" ";
        i++;
    }
    cout<<endl;

    return 0;
}