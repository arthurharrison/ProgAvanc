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
        void cadastrarPaciente(Paciente paciente);
        Triagem();
        
    private:



};


 void Triagem :: cadastrarPaciente(Paciente paciente) {
     this->listaPaciente.push_back(paciente);
}