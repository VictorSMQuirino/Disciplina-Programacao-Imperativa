#include <string>
#include <iostream>
using namespace std;

class Animal{
    protected:
        string nome;
        int idade;

        Animal(string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }
    
    public:
        void fazerSom();
};

class Cachorro : Animal{
    public:
        Cachorro(string nome, int idade): Animal(nome, idade){

        }

        void fazerSom(){
            cout<<"Au au!"<<endl;
        }
};

int main(){
    Cachorro cachorro("Rex", 5);

    cachorro.fazerSom();

    return 0;
}