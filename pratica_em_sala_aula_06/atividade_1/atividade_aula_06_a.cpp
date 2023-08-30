#include<iostream>
using namespace std;

int main(){

    char number = '0';

    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<int(number)<<endl;
        number++;
    }

    return 0;
}