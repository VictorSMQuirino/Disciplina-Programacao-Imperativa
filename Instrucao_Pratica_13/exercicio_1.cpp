#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct Passageiro{
    string nome;
    string cpf;
    int idade;
};

struct Poltrona{
    Passageiro passageiro;
    int numero;
    bool disponivel = 1;
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

double totalArrecadadoNoMes(vector<Viagem> viagens, int mes, int ano){
    double total = 0.0;

    for(int i = 0; i < viagens.size(); i++)
        if(viagens[i].data.mes == mes && viagens[i].data.ano == ano)
            for(int j = 0; j < 40; j++)
                if(viagens[i].poltronas[j].disponivel == 0)
                    total += 80.00;

    return total;
}

string nomePassageiroPoltronaViagem(Viagem viagem, int numeroPoltrona){
    if(numeroPoltrona > 0 && numeroPoltrona <= 40){
        Poltrona poltrona = viagem.poltronas[numeroPoltrona -1];
        
        if(poltrona.disponivel == 0)
            return viagem.poltronas[numeroPoltrona - 1].passageiro.nome;
        else
            return "Essa poltrona nao foi ocupada";
    }
    return "Numero de poltrona invalido";
}

int horarioMaisRentavel(vector<Viagem> viagens){
    //As 5 posições do vetor representam respsctivamente os horários "09:00", "10:30", "13:00", "15:20", "19:00"
    double rendaHorarios[] = {0, 0, 0, 0, 0};
    int posicaoDoHorarioMaisRentavelNoVetor = 0;

    for(Viagem viagem : viagens){
        double rendaDaViagem = totalArrecadadoNaViagem(viagem);
        rendaHorarios[viagem.numero] += rendaDaViagem;
        if(rendaHorarios[viagem.numero] > rendaHorarios[posicaoDoHorarioMaisRentavelNoVetor])
            posicaoDoHorarioMaisRentavelNoVetor = viagem.numero;
    }

    return posicaoDoHorarioMaisRentavelNoVetor;
}

double mediaIdadePassageiros(vector<Viagem> viagens){
    double totalIdades = 0.0;
    double totalPassageiros = 0;

    for(int i = 0; i < viagens.size(); i++)
        for(int j = 0; j < 40; j++)
            if(viagens[i].poltronas[j].disponivel == 0){
                totalIdades += viagens[i].poltronas[j].passageiro.idade;
                totalPassageiros ++;
            }
                
    return totalIdades / totalPassageiros;
}

int main(){

    srand(time(NULL));

    vector<Viagem> viagens;
    string horarios[] = {"09:00", "10:30", "13:00", "15:20", "19:00"};
    
    for(int i = 0; i < 10; i++){
        Viagem viagem;
        viagem.numero = (i < 5) ? i : i - 5;
        int numeroPassageiros = rand() % 40 + 10;

        for(int j = 0; j < numeroPassageiros; j++){

            Poltrona poltrona;
            poltrona.passageiro.nome = "<NAME>";
            poltrona.passageiro.cpf = "123.456.789-10";
            poltrona.passageiro.idade = 100 - j;
            poltrona.disponivel = 0;
            poltrona.numero = j + 1;
            viagem.poltronas[j] = poltrona;
        }
        viagem.data.hora = horarios[i];
        viagem.data.dia = i + 1;
        viagem.data.mes = 2;
        viagem.data.ano = 2023;

        viagem.origem = i % 2 == 0 ? "São Paulo" : "Rio de Janeiro";
        viagem.destino = i % 2 == 0 ? "Rio de Janeiro" : "São Paulo";

        viagens.push_back(viagem);
        cout<<"********************************"<<endl;
        cout<<"Total arrecadado na viagem "<<i+1<<": "<<totalArrecadadoNaViagem(viagem)<<endl;
        cout<<"Nome do passageiro da poltrona 10 da viagem "<<i+1<<": "<<nomePassageiroPoltronaViagem(viagem, 10)<<endl;
    }

    cout<<"********************************"<<endl;
    cout<<"Total arrecadado no mes 2 de 2023 :"<<totalArrecadadoNoMes(viagens, 2, 2023)<<endl;
    cout<<"********************************"<<endl;
    cout<<"Horario mais rentavel: "<<horarios[horarioMaisRentavel(viagens)]<<endl;
    cout<<"********************************"<<endl;
    cout<<"Media idade dos passageiros: "<<fixed<<setprecision(2)<<mediaIdadePassageiros(viagens)<<endl;
    cout<<"********************************"<<endl;
    cout<<"FIM DO PROGRAMA"<<endl;
    
    
    
    /*
        Código para inserção manual dos dados
    */

    // string horarios[] = {"04:15", "05:30", "09:00", "11:15", "12:30", "14:00", "15:30", "16:15", "17:15", "19:00"};

    // vector<Viagem> viagens;
    // int ano, numeroViagem = 1;
    // while(ano > 0){
    //     cout<<"Informe o ano das viagens: ";
    //     cin>>ano;

    //     for(int i = 1; i <= 12; i++){
    //         int mes = i;
    //         int dia;
    //         cout<<"VIAGENS DO ANO "<<ano<<":"<<endl;
    //         cout<<"Mes "<<mes<<":"<<endl;

    //         if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    //             dia = 31;
    //         else if(mes == 2)
    //             dia = (ano % 4 == 0 && (ano % 100 == 0 || ano % 400 == 0)) ? 29 : 28;
    //         else 
    //             dia = 30;

    //         for(int j = 0; j < dia; j++){
    //             cout<<"********************************"<<endl;
    //             cout<<"Dia: "<<j+1<<endl<<endl;

    //             for(int k = 0; k < 10; k++){
    //                 Viagem viagem;
    //                 viagem.data.ano = ano;
    //                 viagem.data.mes = mes;
    //                 viagem.data.dia = dia;
    //                 viagem.numero = numeroViagem;
    //                 numeroViagem++;

    //                 for(int l = 1; l <= 40; l++){
    //                     char resposta;
    //                     cout<<"Algum passageiro comprou uma passagem para a poltrona "<<l<<"? (digite s para sim ou qualquer outro caractere para nao) ";
    //                     cin>>resposta;

    //                     Poltrona poltrona;
    //                     Passageiro passageiro;
    //                     poltrona.numero = l;

    //                     if(resposta == 's'){

    //                         poltrona.disponivel = 0;
    //                         cout<<"Informacoes do passageiro da poltrona "<<l<<endl;
    //                         cout<<"Nome: ";
    //                         cin>>passageiro.nome;
    //                         cout<<"CPF: ";
    //                         cin>>passageiro.cpf;
    //                         cout<<"Idade: ";
    //                         cin>>passageiro.idade;

    //                         poltrona.passageiro = passageiro;
    //                         viagem.poltronas[l] = poltrona;
    //                     } else{
    //                         poltrona.disponivel = 1;
    //                     }
    //                 }
    //                 viagens.push_back(viagem);
    //             }
    //         }
    //     }
    // }

    // cout<<"********************************"<<endl;
    // cout<<"Total da viagem 1: "<<totalArrecadadoNaViagem(viagens[0])<<endl;

    return 0;
}
