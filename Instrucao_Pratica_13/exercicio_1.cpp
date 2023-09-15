#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct Passageiro{
    string nome;
    string cpf;
    int idade;
};

struct Poltrona{
    Passageiro passageiro;
    int numero;
    bool disponivel;
};

struct Data{
    string hora;
    int dia;
    int mes;
    int ano;
};

struct Viagem{
    int numero;
    Poltrona poltronas[40];
    Data data;
    string origem;
    string destino;
};

double totalArrecadadoNaViagem(Viagem viagem){
    double total = 0.0;

    for(int i = 0; i < 40; i++){
        if(viagem.poltronas[i].disponivel == 0)
            total += 80.0;
    }

    return total;
}

double totalArrecadadoNoMes(Viagem *viagens, int mes, int ano){
    double total = 0.0;

    for(int i = 0; i < 10; i++)
        if(viagens[i].data.mes == mes && viagens[i].data.ano == ano)
            for(int j = 0; j < 40; j++)
                if(viagens[i].poltronas[j].disponivel == 0)
                    total += 80.00;

    return total;
}

string nomePassageiroPoltronaViagem(Viagem viagem, int numeroPoltrona){
    if(numeroPoltrona > 0 && numeroPoltrona <= 40)
        return viagem.poltronas[numeroPoltrona - 1].passageiro.nome;
    return "Numero de poltrona invalido";
}

int horarioMaisRentavel(Viagem *viagens){
    string horario;
    int maiorRenda = 0.0;

    for(int i = 0; i < 10; i++){
        double rendaViagem = totalArrecadadoNaViagem(viagens[i]);
        if( rendaViagem > maiorRenda){
            maiorRenda = rendaViagem;
            horario = viagens[i].data.hora;
        }
    }
}

double mediaIdadePassageiros(Viagem *viagens){
    double totalIdades = 0.0;
    double totalPassageiros = 0;

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 40; j++)
            if(viagens[i].poltronas[j].disponivel == 0){
                totalIdades += viagens[i].poltronas[j].passageiro.idade;
                totalPassageiros ++;
            }
                
    return totalIdades / totalPassageiros;
}

int main(){

    string horarios[] = {"04:15", "05:30", "09:00", "11:15", "12:30", "14:00", "15:30", "16:15", "17:15", "19:00"};

    vector<Viagem> viagens;
    int ano, numeroViagem = 1;
    while(ano != 0){
        cout<<"Informe o ano das viagens: ";
        cin>>ano;

        for(int i = 1; i <= 12; i++){
            int mes = i;
            int dia;
            cout<<"VIAGENS DO ANO "<<ano<<":"<<endl;
            cout<<"Mes "<<mes<<":"<<endl;

            Viagem viagem;

            if(mes == 1 || mes == 3|| mes == 5|| mes == 7|| mes == 8|| mes == 10|| mes == 12)
                dia = 31;
            else if(mes == 2)
                dia = (ano % 4 == 0 && (ano % 100 == 0 || ano % 400 == 0)) ? 29 : 28;
            else 
                dia = 30;

            for(int j = 0; j < dia; j++){
                viagem.data.ano = ano;
                viagem.data.mes = mes;
                viagem.data.dia = dia;
                viagem.numero = numeroViagem;
                numeroViagem++;

                for(int k = 1; k <= 40; k++){
                    char resposta;
                    cout<<"Algum passageiro comprou uma passagem para a poltrona "<<k<<"? (digite s para sim ou qualquer outro caractere para nao) ";
                    cin>>resposta;

                    Poltrona poltrona;
                    Passageiro passageiro;
                    poltrona.numero = k;

                    if(resposta == 's'){

                        poltrona.disponivel = 0;
                        cout<<"Informacoes do passageiro da poltrona "<<k<<endl;
                        cout<<"Nome: ";
                        cin>>passageiro.nome;
                        cout<<"CPF: ";
                        cin>>passageiro.cpf;
                        cout<<"Idade: ";
                        cin>>passageiro.idade;

                        poltrona.passageiro = passageiro;
                        viagem.poltronas[k] = poltrona;
                    } else{
                        poltrona.disponivel = 1;
                    }
                }
                viagens.push_back(viagem);
            }
        }
    }

    return 0;
}
