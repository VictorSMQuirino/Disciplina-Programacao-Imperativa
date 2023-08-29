#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float a, b;
    cout<<"A = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;

    cout<<"Soma = "<<fixed<<setprecision(1)<<a + b<<endl;
    cout<<"Subtração = "<<fixed<<setprecision(1)<<a - b<<endl;
    cout<<"Multiplicação = "<<fixed<<setprecision(1)<<a * b<<endl;
    cout<<"Divisão = "<<fixed<<setprecision(1)<<a / b<<endl;

    return 0;
}