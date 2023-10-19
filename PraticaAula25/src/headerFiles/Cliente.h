#ifndef CLIENTE_H
#define CLIENTE_H
#include "Usuario.h"
#include "Aluguel.h"
#include <vector>

using namespace std;

class Cliente : public Usuario{
    private:
        string habilitacao;
        vector<Aluguel> historicoAlugueis;
    public:
        Cliente();
        Cliente(string, string, string, string, string);
        string getHabilitacao();
        float cotarAluguel(Veiculo, Data, Data);
        Aluguel solicitarAluguel(Veiculo &, Data, Data);
        void devolverVeiculo(Aluguel, Data);
        
};

#endif