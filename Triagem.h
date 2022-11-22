#pragma once
#include <iostream>
#include <stralign.h>
#include <vector>
#include "Paciente.h"
using namespace std;

class Triagem : public Paciente
{

    public:

        string sintoma;
        vector<Paciente> listaPaciente;
       // void triagemPaciente(Paciente paciente);
        Triagem();
        
    private:



};


