#include <string>
using namespace std;

struct Material{
    private:
        int codigo_peca;
        string descricao;
        int quantidade;
        double valor;
    
    public:
        Material(int codigo_peca, string descricao, int quantidade, double valor){
            this->codigo_peca = codigo_peca;
            this->descricao = descricao;
            this->quantidade = quantidade;
            this->valor = valor;
        }
        int get_codigo_peca();
        string get_descricao();
        int get_quantidade();
        double get_valor();
};

int Material::get_codigo_peca(){
    return codigo_peca;
}

string Material::get_descricao(){
    return descricao;
}

int Material::get_quantidade(){
    return quantidade;
}

double Material::get_valor(){
    return valor;
}