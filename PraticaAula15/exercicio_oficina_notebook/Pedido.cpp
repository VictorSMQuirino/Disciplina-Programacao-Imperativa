#include <string>
using namespace std;

struct Pedido{
    private:
        int numero;
        string nome_cliente;
        string telefone_cliente;
        string defeito_reclamado;

    public:
        Pedido(int numero, string nome_cliente, string telefone_cliente, string defeito_reclamado){
            this->numero = numero;
            this->nome_cliente = nome_cliente;
            this->telefone_cliente = telefone_cliente;
            this->defeito_reclamado = defeito_reclamado;
        }
        string get_nome_cliente();
        string get_telefone_cliente();
        string get_defeito_reclamado();
};

string Pedido::get_nome_cliente(){
    return nome_cliente;
}
string Pedido::get_telefone_cliente(){
    return telefone_cliente;
}

string Pedido::get_defeito_reclamado(){
    return defeito_reclamado;
}
