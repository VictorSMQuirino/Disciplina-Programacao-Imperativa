#include<iostream>
using namespace std;

int main(){

    int altura;
    char caractere = 65;
    cin>>altura;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<caractere;
            caractere++;
        }
        cout<<endl;
    }

    return 0;
}