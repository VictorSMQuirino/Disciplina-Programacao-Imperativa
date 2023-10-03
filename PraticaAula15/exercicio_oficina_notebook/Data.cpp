#include <string>
#include <regex>
#include <sstream>
using namespace std;

struct Data{
    private:
        string data;
    public:
        static bool valida_formato(string &);
        static bool valida_data(string);
};

bool Data::valida_formato(string &data){
    regex pattern(R"(\d{2}/\d{2}/\d{4})");

    return regex_match(data, pattern);
}

bool Data::valida_data(string data){
    istringstream ss(data);
    char delimiter;
    int dia, mes, ano;

    ss>>dia>>delimiter>>mes>>delimiter>>ano;

    if(mes < 1 || mes > 12)
        return false;
    if(mes == 2){
        if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
            if(dia < 1 || dia > 29)
                return false;
        } else if(dia < 1 || dia > 28) {
            return false;
        }
    } else if (mes == 1 || mes == 3 || mes == 5 || 
                mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia < 1 || dia > 31)
            return false;
    } else {
        if(dia < 1 || dia > 30)
            return false;
    }

    return true;
}