#include <iostream>
using namespace std;

void ordena(float &n1, float &n2, float &n3, float &n4);

int main(){

    float n1, n2, n3, n4;
    cout<<"Digite 4 numeros de ponto flutuante: ";
    cin>>n1>>n2>>n3>>n4;

    ordena(n1, n2, n3, n4);

    cout<<"Os numeros em ordem crescente: "<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;

    return 0;
}

void ordena(float &n1, float &n2, float &n3, float &n4){
    float aux, vec[4];
    vec[0]=n1; vec[1]=n2; vec[2]=n3; vec[3]=n4;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(vec[i] < vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    n1 = vec[0]; n2 = vec[1]; n3 = vec[2]; n4 = vec[3];
}