#include<iostream>
using namespace std;

int main(){

    srand(time(NULL));
    int vetor[100];
    int vezes[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int maior = 0;

    for(int i = 0; i < 100; i ++){
        vetor[i] = 1 + rand() % 20;
    }

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 100; j++){
            if(vetor[j] == i + 1)
                vezes[i]++;
        }
        if(vezes[i] > maior)
            maior = vezes[i];

        cout<<"Numero "<<i+1<<" aparece "<<vezes[i]<<" vezes"<<endl;
    }

    cout<<"\nNumero(s) que mais aparece(m): ";
    for(int i = 0; i < 20; i++)
        if(vezes[i] == maior)
            cout<<i+1<<" ";
    cout<<"- Aparece(m) "<<maior<<" vezes"<<endl;

    cout<<endl;

    return 0;
}