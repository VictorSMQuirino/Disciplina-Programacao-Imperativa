#include "Usuario.h"

Usuario::Usuario(){
    
}

Usuario::Usuario(string cpf, string nome, string endereco, string telefone){
    this->cpf = cpf;
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

string Usuario::getCpf(){
    return this->cpf;
}

string Usuario::getNome(){
    return this->nome;
}

string Usuario::getEndereco(){
    return this->endereco;
}

string Usuario::getTelefone(){
    return this->telefone;
}