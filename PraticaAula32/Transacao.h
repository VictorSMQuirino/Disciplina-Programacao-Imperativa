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
        void setData(string data);
        void setValor(float valor);
        void setDescricao(string descricao);
};

#endif