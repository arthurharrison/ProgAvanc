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
        void imprimir();
        


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

    void Paciente :: imprimir() {
        cout << "NOME: " << this->nome;
        cout << "ENDEREÇO: " << this->endereco;
        cout << "TELEFONE: " << this->telefone;
        cout << "RG: " << this->rg;
        cout << "CPF: " << this->cpf;
        cout << "IDADE: " << this->idade;
}