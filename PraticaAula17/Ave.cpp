#include<string>
#include<iostream>
using namespace std;

class Ave{
    private:
        string especie;
        double peso;
        int idade;
        string genero;
        bool capacidadeDeVoar;
        double alturaVoo = 0.0;

    public:
        Ave(string especie = "Indefinida", double peso = 0.0, int idade = 0, string genero = "Indefinido", bool capacidadeDeVoar = false){
            this->especie = especie;
            this->peso = peso;
            this->idade = idade;
            this->genero = genero;
            this->capacidadeDeVoar = capacidadeDeVoar;
        }

        void voar(double altura){
            if(capacidadeDeVoar == true) cout<<"A ave esta voando a "<<altura<<" metros de altura..."<<endl;
            else cout<<"A ave nao tem capacidade de voar!"<<endl;
        }

        void pousar(){
            if(capacidadeDeVoar == true){
                cout<<"A ave pousou..."<<endl;
                alturaVoo = 0.0;
            }
            else cout<<"A ave nao tem capacidade de voar!"<<endl;
        }

        void envelhecer(){
            idade++;
        }

        //GETTERS
        string getEspecie(){return especie;}

        double getPeso(){return peso;}

        int getIdade(){return idade;}

        string getGenero(){return genero;}

        double getAlturaVoo(){return alturaVoo;}

        bool getCapacidadeDeVoar(){return capacidadeDeVoar;}

        //SETTERS
        void setEspecie(string especie){
            this->especie = especie;
        }

        void setPeso(double peso){
            this->peso = peso;
        }

        void setIdade(int idade){
            this->idade = idade;
        }

        void setGenero(string genero){
            this->genero = genero;
        }
};