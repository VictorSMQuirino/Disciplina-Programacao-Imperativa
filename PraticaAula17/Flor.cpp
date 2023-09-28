#include<string>
#include<iostream>
using namespace std;

class Flor{
    private:
        string especie;
        string genero;
        bool ehEspinhosa;
        int numeroDePetalas;
        string estacaoDeFlorescimento;

    public:
        Flor(string especie = "Indefinida", string genero = "Indefinido", bool ehEspinhosa = false, int numeroDePetalas = 4, string estacaoDeFlorescimento = "Infefinida"){
            this->especie = especie;
            this->genero = genero;
            this->ehEspinhosa = ehEspinhosa;
            this->numeroDePetalas = numeroDePetalas;
            this->estacaoDeFlorescimento = estacaoDeFlorescimento;
        }

    //GETTERS
    string getEspecie() {return especie;}

    string getGenero() {return genero;}

    bool getEhEspinhosa() {return ehEspinhosa;}

    int getNumeroDePetalas(){return numeroDePetalas;}

    string getEstacaoDeFlorescimento(){return estacaoDeFlorescimento;}

    //SETTERS
    void setEspecie(string especie){
        this->especie = especie;
    }

    void setGenero(string genero){
        this->genero = genero;
    }

    void setEhEspinhosa(bool ehEspinhosa){
        this->ehEspinhosa = ehEspinhosa;
    }

    void setNumeroDePetalas(int numeroDePetalas){
        this->numeroDePetalas = numeroDePetalas;
    }

    void setEstacaoDeFlorescimento(string estacaoDeFlorescimento){
        this->estacaoDeFlorescimento = estacaoDeFlorescimento;
    }
};