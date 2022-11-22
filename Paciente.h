#pragma once
#include <iostream>
#include <stralign.h>
#include <vector>
using namespace std;
class Paciente
{
 
    public:
        string nome;
        string endereco;
        string telefone;
        string rg;
        string cpf;
        vector<Paciente> listaPacientes;
        void cadastrarPaciente();


    private:

};

