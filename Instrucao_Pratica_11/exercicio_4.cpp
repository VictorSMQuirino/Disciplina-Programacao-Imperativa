#include <iostream>
using namespace std;

void calcula (int &x, int &y);

int main(){

    cout<<"Digite dois valores inteiros: ";
    int x, y;
    cin>>x>>y;
    calcula(x, y);
    cout<<"Valores de x e y apos a chamada da funcao calcula: "<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;

    return 0;
}

void calcula (int &x, int &y){
    int soma = x + y;
    int subtracao = x - y;
    x = soma;
    y = subtracao;
}