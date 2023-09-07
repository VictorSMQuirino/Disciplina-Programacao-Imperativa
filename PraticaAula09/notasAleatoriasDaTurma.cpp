#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float notas1[15], notas2[15], medias[15];

    srand(time(NULL));
    cout<<"Aluno\tNota 1\tNota2\tMedia\tPerformance"<<endl;
    cout<<"------------------------------------------"<<endl;
    
    for(int i = 0; i < 15; i++){
        notas1[i] = ((float)rand()/RAND_MAX)*10;
        notas2[i] = ((float)rand()/RAND_MAX)*10;
        medias[i] = (notas1[i] + notas2[i]) / 2;

        cout<<i+1<<"\t"<<fixed<<setprecision(1)<<notas1[i]<<"\t"<<notas2[i]<<"\t"<<medias[i]<<"\t";

        if(notas1[i] > notas2[i])
            cout<<"Piorou"<<endl;
        else if(notas1[i] < notas2[i])
            cout<<"Melhorou"<<endl;
        else
            cout<<"Manteve a nota"<<endl;
    }



    return 0;
}