#include <string>
#include <cctype>
using namespace std;
class Senha{
    public:
        static bool validar_senha(string);
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
