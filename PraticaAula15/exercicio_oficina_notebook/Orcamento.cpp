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
};