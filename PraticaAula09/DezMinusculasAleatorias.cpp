#include<iostream>
#include<string.h>
#include<locale>
using namespace std;

int main(){

    char palavras[10][11];
    locale loc;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        cout<<"String "<<i+1<<":\t";
        for(int j = 0; j < 10; j++){
            palavras[i][j] = 'a' + rand() % ('z' - 'a');
            cout<<palavras[i][j];
        }
        cout<<endl;
        palavras[i][11] = '\0';
    }
    cout<<endl;

    for(int i = 0; i < 10; i++){
        palavras[i][0] = toupper(palavras[i][0], loc);
    }

    for(int i = 0; i < 10; i++){
        cout<<"String "<<i+1<<" com maiuscula:\t";
        for(int j = 0; j < 10; j++){
            cout<<palavras[i][j];
        }
        cout<<endl;
    }

    return 0;
}