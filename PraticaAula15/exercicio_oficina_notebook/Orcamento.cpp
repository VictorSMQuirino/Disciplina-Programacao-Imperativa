#include <string>
#include "Material.cpp"
#include "Data.cpp"
using namespace std;

struct Orcamento{
    private:
        int numero;
        string defeito_averiguado;
        Material material;
        double valor_mao_de_obra;
        double valor_total;
        Data data;
        bool aprovado;
    public:
        Orcamento(int numero, string defeito_averiguado, Material material, double valor_mao_de_obra, double valor_total, Data data, bool aprovado){
            this->numero = numero;
            this->defeito_averiguado = defeito_averiguado;
            this->material = material;
            this->valor_mao_de_obra = valor_mao_de_obra;
            this->valor_total = valor_total;
            this->data = data;
            this->aprovado = aprovado;
        }
        int get_numero();
        string get_defeito_averiguado();
        Material get_material();
        double get_valor_mao_de_obra();
        double get_valor_total();
        Data get_data();
        bool get_aprovado();
};

int Orcamento::get_numero(){
    return numero;
}

string Orcamento::get_defeito_averiguado(){
    return defeito_averiguado;
}

Material Orcamento::get_material(){
    return material;
}

double Orcamento::get_valor_mao_de_obra(){
    return valor_mao_de_obra;
}