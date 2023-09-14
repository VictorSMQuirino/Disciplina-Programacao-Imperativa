#include <iostream>
#include <string>
using namespace std;

string codifica(string palavra);
string decodifica(string codigo);

int main(){

    string palavra;
    cout<<"Digite uma palavra para ser codificada: ";
    getline(cin, palavra);

    string palavraCodificada = codifica(palavra);
    cout<<"A codificação da palavra é: "<<palavraCodificada<<endl;
    cout<<"A decodificação da palavra codificada é: "<<decodifica(palavraCodificada)<<endl;

    return 0;
}

string codifica(string palavra){
    char letras[] = {'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a'};

    for(int i = 0; i < palavra.length(); i++){
        palavra[i] = letras[palavra[i] - 'a'];
    }
    string codigo  = palavra;

    return codigo;
}

string decodifica(string codigo){
    char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

     for(int i = 0; i < codigo.length(); i++){
        if(codigo[i] == 'a')
            codigo[i] = 'z';
        else
            codigo[i] = letras[codigo[i] - 'b'];
    }
    string palavra = codigo;

    return palavra;
}