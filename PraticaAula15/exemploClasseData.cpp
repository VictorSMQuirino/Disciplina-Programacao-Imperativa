#include <iostream>
#include <string>
using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:
        bool valida();
        void imprimirPorExtenso();
        
        int getDia(){
           return dia; 
        }
        int getMes(){
            return mes;
        }
        int getAno(){
            return ano;
        }

        void setDia(int dia){
            this->dia = dia;
        }
        void setMes(int mes){
            this->mes = mes;
        }
        void setAno(int ano){
            this->ano = ano;
        }
};

bool Data::valida(){
    if(this->mes < 1 || this->mes > 12 || this->dia < 1)
        return false;
    if(this->mes == 2){
        if(this->ano % 4 == 0 && (this->ano % 100 != 0 || this->ano % 400 == 0))
            if(this->dia > 29)
                return false;
        else if(this->dia > 28)
            return false;
    } 
    if(this->mes == 1 || this->mes == 3 || this->mes == 5 || this->mes == 7 || this->mes == 8 || this->mes == 10 || this->mes ==12)
        if(this->dia > 31)
            return false;
    if(this->dia > 30)
        return false;

    return true;
}

void Data::imprimirPorExtenso(){
    string meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", 
    "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    if(!valida())
        cout<<"ERRO"<<endl;
    else{
        cout<<this->dia<<" de "<<meses[this->mes - 1]<<" de "<<this->ano<<endl;
    }
}

int main(){
    Data data;
    int dia, mes, ano;

    cout<<"Digite uma data:"<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;

    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);

    if(!data.valida())
        cout<<"\nEsta data nao e valida!"<<endl;
    else{
        data.imprimirPorExtenso();
    }

    return 0;
}