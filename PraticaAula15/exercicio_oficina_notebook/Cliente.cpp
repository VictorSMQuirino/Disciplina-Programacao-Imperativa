#include <string>
using namespace std;

struct Cliente{
    private:
        int id;
        string nome;
        string numero_telefone;

    public:
        Cliente(int id, string nome, string numero_telefone){
            this->id = id;
            this->nome = nome;
            this->numero_telefone = numero_telefone;
        }
        string get_nome();
        string get_numero_telefone();
};

string Cliente::get_nome(){
    return nome;
}

string Cliente::get_numero_telefone(){
    return numero_telefone;
}