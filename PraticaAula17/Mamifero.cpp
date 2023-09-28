#include <string>
using namespace std;

class Mamifero{
    private:
        string especie;
        double peso;
        string genero;
        int idade;

    public:
        Mamifero(string especie = "Indefinido", double peso = 0.0, string genero = "Indefinido", int idade = 0){
            this->especie = especie;
            this->peso = peso;
            this->genero = genero;
            this->idade = idade;
        }

        //GETTERS
        string getEspecie(){
            return especie;
        }

        double getPeso(){
            return peso;
        }

        string getGenero(){
            return genero;
        }

        int getIdade(){
            return idade;
        }

        //SETTERS
        void setEspecie(string especie){
            this->especie = especie;
        }

        void setPeso(double peso){
            this->peso = peso;
        }

        void setGenero(string genero){
            this->genero = genero;
        }

        void setIdade(){
            this->idade = idade;
        }
};