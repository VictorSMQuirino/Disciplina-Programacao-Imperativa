#include<iostream>
#include<stdio.h>
#include<cstring>
#include<iomanip>
using namespace std;

int main(int argc, char* argv[]){

    if(argc != 4)
        cout<<"Passe 4 argumentos para o programa"<<endl;
    else if(strcmp(argv[1], "\\int")  != 0  && strcmp(argv[1], "\\double")  != 0)
        cout<<"Digite \\int ou \\double para o segundo argumento!"<<endl;
    else{
        if(strcmp(argv[1], "\\int") == 0){
            cout<<"Divisão = "<<atoi(argv[2]) / atoi(argv[3])<<endl;
        } else{
            cout<<"Divisão = "<<fixed<<setprecision(1)<<atof(argv[2]) / atof(argv[3])<<endl;
        }       
    }
    return 0;
}