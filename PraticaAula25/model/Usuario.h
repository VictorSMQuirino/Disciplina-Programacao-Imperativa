#ifndef USUARIO_H
#define USUARIO_H
#include <string>

using namespace std;

class Usuario{
    protected:
        string cpf, nome, endereco, telefone;
    public:
        Usuario();
        Usuario(string, string, string, string);
        string getCpf();
        string getNome();
        string getEndereco();
        string getTelefone();
};

#endif