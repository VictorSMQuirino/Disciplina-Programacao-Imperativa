#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

string letrasIguais(string a, string b);

int main(){

    cout<<"Digite duas palavras:"<<endl;
    string a, b;
    cin>>a>>b;
    cout<<"Os caracteres que aparecem nas duas palavras são: "<<endl;
    cout<<letrasIguais(a, b)<<endl;

    return 0;
}

string letrasIguais(string a, string b){
    string c = "";
    for(char letra = 97; letra <= 122; letra++){
        bool contemA = false, contemB = false;
        for(int i = 0; i < a.length(); i++){
            if(tolower(a.at(i)) == tolower(letra))
                contemA = true;
        }
        for(int i = 0; i < b.length(); i++){
            if(tolower(b.at(i)) == tolower(letra))
                contemB = true;
        }
        
        if(contemA && contemB){
            c.push_back(letra);
            c.push_back(' ');
        }
    }

    return c;
}