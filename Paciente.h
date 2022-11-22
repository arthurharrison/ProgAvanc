#pragma once
#include <iostream>
#include <stralign.h>

using namespace std;
class Paciente
{
 
    public:
        string nome;
        string endereco;
        string telefone;
        string rg;
        string cpf;
        int idade;
        Paciente(string nome, string endereco, string telefone, string rg,
            string cpf, int idade);
        


    private:

};

Paciente::Paciente(string nome, string endereco, string telefone, string rg,
    string cpf, int idade) {
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
    this->rg = rg;
    this->cpf = cpf;
    this->idade = idade;
}