#ifndef VEICULO_H
#define VEICULO_H
#include <string>

using namespace std;

class Veiculo{
    private:
        string identificador, marca, modelo;
        int anoFabricacao;
        float precoPorDia;
        bool estaAlugado;
    public:
        Veiculo();
        Veiculo(string, string, string, int, float);
        string getIdentificador();
        string getMarca();
        string getModelo();
        int getAnoFabricacao();
        float getPrecoPorDia();
        bool getEstaAlugado();
        void setEstaAlugado(bool);
};

#endif