#include<iostream>
#include<string>
#include<locale>
#include<algorithm>
using namespace std;

int main(){

    char palavra1[11], palavra2[11];
    locale loc;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        palavra1[i] = 'a' + rand() % ('z' - 'a');
        palavra2[i] = 'a' + rand() % ('z' - 'a');
    }
    palavra1[10] = '\0';
    palavra2[10] = '\0';

    cout<<"Strings geradas aleatoriamente:"<<endl;
    cout<<palavra1<<endl;
    cout<<palavra2<<endl<<endl;

    cout<<"Transformando o primeiro caractere de cada uma em maiuscula: "<<endl;
    palavra1[0] = toupper(palavra1[0], loc);
    palavra2[0] = toupper(palavra2[0], loc);
    cout<<palavra1<<endl;
    cout<<palavra2<<endl<<endl;

    // cout<<"Strings em ordem alfabetica:"<<endl;
    // sort(palavra1[0], palavra1[10]);
    // cout<<palavra1<<endl;
    // cout<<palavra2<<endl;

    return 0;
}