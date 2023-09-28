#include <string>
#include <iostream>
using namespace std;

class Celular{
    private:
        int codigo;
        string marca;
        string modelo;
        int capacidadeRAM;
        int capacidadeArmazenamento;
        string processador;

    public:
        Celular(int codigo, string marca = "Indefinida", string modelo = "Indefinido",
         int capacidadeRAM = 2, int capacidadeArmazenamento = 32, string processador = "Indefinido"){
            this->codigo = codigo;
            this->marca = marca;
            this->modelo = modelo;
            this->capacidadeRAM = capacidadeRAM;
            this->capacidadeArmazenamento = capacidadeArmazenamento;
            this->processador = processador;
        }

        void receberChamada(){
            cout<<"O celular esta tocando..."<<endl;
        }

        void realizarChamada(int numero){
            cout<<"Chamando numero "<<numero<<"..."<<endl;
        }

        //GETTERS
        int getCodigo(){return codigo;}

        string getMarca(){return marca;}

        string getModelo(){return modelo;}

        int getCapacidadeRAM(){return capacidadeRAM;}

        int getCapacidadeROM(){return capacidadeArmazenamento;}

        string getProcessador(){return processador;}

        //SETTERS
        void setCodigo(int codigo){
            this->codigo = codigo;
        }

        void setMarca(string marca){
            this->marca = marca;
        }

        void setModelo(string modelo){
            this->modelo = modelo;
        }

        void setCapacidadeRAM(int capacidadeRAM){
            this->capacidadeRAM = capacidadeRAM;
        }

        void setCapacidadeROM(int capacidadeArmazenamento){
            this->capacidadeArmazenamento = capacidadeArmazenamento;
        }

        void setProcessador(string processador){
            this->processador = processador;
        }
};