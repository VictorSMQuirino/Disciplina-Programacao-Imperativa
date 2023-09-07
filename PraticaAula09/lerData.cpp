#include<iostream>
#include<string>
using namespace std;

//bool verificaFormatoData(string data);
bool verificaDataValida(string dia, string mes, string ano);
string mesPorExtenso(string mes);

int main(){

    string data, dia, mes, ano;

    cout<<"Digite uma data no formato (dd/MM/yyyy): ";
    getline(cin, data);

    dia = data.substr(0, 2);
    mes = data.substr(3, 2);
    ano = data.substr(6, 4);

    if(!verificaDataValida(dia, mes, ano))
        cout<<"Digite uma data válida!"<<endl;
    else{
        cout<<"Dia: "<<dia<<endl;
        cout<<"Mes: "<<mes<<endl;
        cout<<"Ano: "<<ano<<endl;

        cout<<"Data por extenso: "<<dia<<" de "<<mesPorExtenso(mes)<<" de "<<ano<<endl;
    }
    
    return 0;
}

// bool verificaFormatoData(string data){
    
// }

bool verificaDataValida(string dia, string mes, string ano){

    int diaInt = stoi(dia), mesInt = stoi(mes), anoInt = stoi(ano);

    if(anoInt < 0){
        return false;
    } else if(mesInt < 1 || mesInt > 12){
        return false;
    } else if(diaInt < 1){
        return false;
    } else if(mesInt == 2){
        if(anoInt % 4 == 0){
            if(diaInt > 29){
                return false;
            }
        } else if(diaInt > 28){
            return false;
        }
    } else if(mesInt == 1 || mesInt == 3 || mesInt == 5
            || mesInt == 7 || mesInt == 8 || mesInt == 10
            || mesInt == 12){
                if(diaInt > 31){
                    return false;
                }
    } else if(diaInt > 30) {
        return false;
    }

    return true;
}

string mesPorExtenso(string mes){
    int mesInt = stoi(mes);
    string meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio",
                        "junho", "julho", "agosto", "setembro", "outubro",
                        "novembro", "dezembro"};
    
    string mesString = meses[mesInt - 1];

    return mesString;
}