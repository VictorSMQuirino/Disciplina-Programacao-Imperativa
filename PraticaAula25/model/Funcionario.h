#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "Usuario.h"
#include "Aluguel.h"
#include <vector>

class Funcionario : public Usuario{
    private:
        vector<Aluguel> historicoAlugueis;
    public:
        Funcionario();
        Funcionario(string, string, string, string);
        vector<Aluguel> getHistoricoAlugueis();
        Aluguel alugarVeiculo(Cliente &, Veiculo &, Data, Data);
        void finalizarAluguel(Aluguel &, Data);
};

#endif