#include<iostream>
using namespace std;

int main(){

    int imagem[640][480];
    int intensidades[256];

    for(int i = 0; i < 256; i++)
        intensidades[i] = 0;

    srand(time(NULL));

    for(int i = 0; i < 480; i++){
        for(int j = 0; j < 640; j++){
            imagem[i][j] = rand() % 256;
            cout<<imagem[i][j]<<"\t";
            intensidades[imagem[i][j]]++;
        }
        cout<<endl;
    }

    return 0;
}