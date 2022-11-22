// APS - SEGUNDA UNIDADE.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class AtendimentoHospital{

public:
    string nome;
    string cpf;
    string rg;
    string sintoma;
private:




};

class Paciente{
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

int main()
{
    Paciente * paciente = new Paciente();
  
    return 0;
}






