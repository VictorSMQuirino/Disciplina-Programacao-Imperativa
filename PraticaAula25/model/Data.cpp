#include "Data.h"

Data::Data(){
    
}

Data::Data(string data){
    stringstream ss(data);
    ss>>this->dia;
    ss.ignore('/');
    ss>>this->mes;
    ss.ignore('/');
    ss>>this->ano;
}

Data::Data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

bool Data::validaFormato(string &data){
    regex datePattern(R"(\d{2}/\d{2}/\d{4})");

    return regex_match(data, datePattern);
}

int Data::diasPassadosEntreDatas(Data data1, Data data2){
    int diasPassados = 0;
    int dia1 = data1.getDia(), dia2 = data2.getDia(),
     mes1 = data1.getMes(), mes2 = data2.getMes(), 
     ano1 = data1.getAno(), ano2 = data2.getAno();
    
    while (dia1 != dia2 || mes1 != mes2 || ano1 != ano2) {
        diasPassados++;

        dia1++;
        if(dia1 > diasNoMes(mes1, ano1)){
            dia1 = 1;
            mes1++;
            if(mes1 > 12){
                mes1 = 1;
                ano1++;
            }
        }
    }

    return diasPassados;
}

bool Data::ehBissexto(int ano){
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int Data::diasNoMes(int mes, int ano){
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(mes == 2 && ehBissexto(ano)) return 29;
    return diasPorMes[mes - 1];
}

Data Data::atual(){
    time_t t = time(nullptr);
    struct tm * now = localtime(&t);

    int dia = now->tm_mday;
    int mes = now->tm_mon + 1;
    int ano = now->tm_year + 1900;

    Data atual = Data(dia, mes, ano);

    return atual;
}

int Data::getDia(){
    return this->dia;
}

int Data::getMes(){
    return this->mes;
}

int Data::getAno(){
    return this->ano;
}