#include <string>
#include <cctype>
using namespace std;
class Senha{
    public:
        static bool validar_senha(string);
        static string gerar_senha();
};

bool Senha::validar_senha(string senha){
    bool minusculas = false, maiusculas = false, numeros = false;
    if(senha.length() < 8) return false;
    for(char c : senha){
        if(isdigit(c)) numeros = true;
        else if(islower(c)) minusculas = true;
        else if(isupper(c)) maiusculas = true;
    }

    return (minusculas && maiusculas && numeros);
}

string Senha::gerar_senha(){
    string senha = "";
    char caracteres[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r','s', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    for(int i = 0; i < 8; i++) senha.push_back(caracteres[rand() % 62]);
    return senha;
}
