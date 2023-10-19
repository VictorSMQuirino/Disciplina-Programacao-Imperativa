#ifndef TRANSACAO_H
#define TRANSACAO_H
#include <string>

using namespace std;

class Transacao{
    private:
        string data, descricao;
        float valor;
    public:
        string getData();
        float getValor();
        string getDescricao();
};

#endif