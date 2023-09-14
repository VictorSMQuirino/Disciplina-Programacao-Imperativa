#include <iostream>
using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2);

int main(){

    int tamanho1, tamanho2;
    cout<<"Informe os tamanhos dos dois vetores: ";
    cin>>tamanho1>>tamanho2;
    int vetor1[tamanho1], vetor2[tamanho2];

    cout<<"Informe os valores do vetor 1: ";
    for(int i = 0; i < tamanho1; i++){
        cin>>vetor1[i];
    }

    cout<<"Informe os valores do vetor 2: ";
    for(int i = 0; i < tamanho2; i++){
        cin>>vetor2[i];
    }

    int* vetorIntercalado = intercala(vetor1, tamanho1, vetor2, tamanho2);
    cout<<"Vetor intercalado:"<<endl;
    for(int i = 0; i < tamanho1 + tamanho2; i++){
        cout<<vetorIntercalado[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2){
    int tam3 = tam1 + tam2;
    int* vet3 = new int[tam3];
    int valores1 = 0, valores2 = 0;

    for(int i = 0; i < tam3; i++){
        if(i % 2 != 0){
            if(valores1 < tam1){
                vet3[i] = vet1[valores1];
                valores1++;
            } else{
                vet3[i] = vet2[valores2];
                valores2++;
            }
        } else{
            if(valores2 < tam2){
                vet3[i] = vet2[valores2];
                valores2++;
            } else{
                vet3[i] = vet1[valores1];
                valores1++;
            }
        }
    }

    return vet3;
}