#ifndef DATA_H
#define DATA_H
#include <string>
#include <sstream>
#include <regex>
#include <ctime>

using namespace std;

class Data{
    private:
        int dia, mes, ano;
    public:
        Data();
        Data(string);
        Data(int, int, int);
        static bool validaFormato(string &);
        static int diasPassadosEntreDatas(Data, Data);
        static bool ehBissexto(int);
        static int diasNoMes(int, int);
        static Data atual();
        int getDia();
        int getMes();
        int getAno();
};

#endif