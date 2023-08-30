#include<iostream>
using namespace std;

int main(){

    char number;
    cin>>number;

    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<int(number)<<endl;
        number++;
    }

    cout<<endl;
    //number = '0';

    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<oct<<int(number)<<endl;
        number++;
    }

    return 0;
}