#include <string>
using namespace std;

class Aluno{
    private:
        string nome, email;
        float nota1, nota2;

    public:
        Aluno(string nome, string email, float nota1, float nota2){
            this->nome = nome;
            this->email = email;
            this->nota1 = nota1;
            this->nota2 = nota2;
        }

        string getNome();
        string getEmail();
        float getNota1();
        float getNota2();
};

string Aluno::getNome(){
    return nome;
}

string Aluno::getEmail(){
    return email;
}

float Aluno::getNota1(){
    return nota1;
}

float Aluno::getNota2(){
    return nota2;
}