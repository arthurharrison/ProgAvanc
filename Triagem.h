#pragma once
#include <iostream>
#include <stralign.h>
#include <vector>
#include "Paciente.h"
using namespace std;

class Triagem : public Paciente
{

    public:
        string cpf;
        string endereco;
        string telefone;
        int idade;
        string sintoma;
        vector<Paciente> listaPaciente;
    private:



};

