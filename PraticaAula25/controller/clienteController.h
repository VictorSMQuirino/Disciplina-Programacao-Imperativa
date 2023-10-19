#ifndef CLIENTECONTROLLER_H
#define CLIENTECONTROLLER_H

#include <vector>
#include <iostream>
#include "../model/Cliente.h"

using namespace std;

class clienteController{
    public:
        static void criarCliente(vector<Cliente> &);
        static void excluirCliente(vector<Cliente> &);
        static bool existeClienteComCpf(string, vector<Cliente> &);
        static bool existeClienteComHabilitacao(string, vector<Cliente> &);
        static int localizaClientePorCpf(string, vector<Cliente> &);
        static Aluguel alugarVeiculo(int, Cliente &, Veiculo &, Data, Data);
};

#endif