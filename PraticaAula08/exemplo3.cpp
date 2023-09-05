#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char* argv[]){

    int anoInt;
    sscanf(argv[2], "%d", &anoInt);

    cout<<"Bom dia "<<argv[1]<<" sua idade eh "<<(2023 - anoInt)<<endl;

    return 0;
}