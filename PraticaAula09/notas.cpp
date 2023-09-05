#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){

    char continua;
    vector<int> matriculas;
    int mat;
    vector<float> notas, medias;
    float nota, media;
    int contador = 0;

    do{
        cout<<"Matricula: ";
        cin>>mat;
        matriculas.push_back(mat);
        for(int i = 0; i < 3; i++){
            cout<<"Nota "<<i+1<<": ";
            cin>>nota;
            notas.push_back(nota);
        }
        media = (notas[contador] + notas[contador + 1] + notas[contador + 2]) / 3;
        medias.push_back(media);
        contador++;

        cout<<"\nDeseja inserir mais um aluno? (Digite 's' se deseja inserir) ";
        cin>>continua;
    } while(continua == 's');

    cout<<"MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA"<<endl;
    for(int i = 0, j = 0; i < matriculas.size(); i ++, j += 3){
        cout<<"==========================================="<<endl;
        cout<<matriculas[i]<<"\t"<<notas[j]<<"\t"<<notas[j + 1]<<"\t"<<notas[j + 2]<<"\t"<<fixed<<setprecision(1)<<medias[i]<<endl;
    }

    return 0;
}