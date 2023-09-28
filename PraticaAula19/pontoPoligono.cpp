#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Ponto{
    private:
        float x, y;

    public:
        float getX();
        float getY();
        void setX(float);
        void setY(float);
        // float getX(){return x;}
        // float getY(){return y;}

        // void setX(float x){
        //     this->x = x;
        // }
        // void setY(float y){
        //     cout<<"Digite o valor de y: ";
        //     this->y = y;
        // }
};

class Poligono{
    private:
        vector<Ponto> pontos;

    public:
        string getCoordenadas(){
            string resposta = "";

            for(Ponto ponto : pontos){
                //resposta += ponto.getX() + ', ' + ponto.getY() + ', ';
                resposta.push_back('(');
                resposta.push_back(ponto.getX());
                resposta.push_back(',');
                resposta.push_back(' ');
                resposta.push_back(ponto.getY());
                resposta.push_back(')');
            }

            return resposta;
        }

        void inserirPonto(Ponto p){
            this->pontos.push_back(p);
        }
};