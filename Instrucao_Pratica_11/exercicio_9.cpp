#include<iostream>
using namespace std;

float calc_serie(int N);

int main(){

    int N;
    cout<<"Informe o valor de N: ";
    cin>>N;
    cout<<"O valor da serie de N eh: "<<calc_serie(N)<<endl;

    return 0;
}

float calc_serie(int N){
    float s = 0;

    for(float i = 1, divisor = N; i <= N; i++, divisor--){
        s += i / divisor;
    }

    return s;
}