// APS - SEGUNDA UNIDADE.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string.h>
#include <vector>
#include "Paciente.h"
#include "Triagem.h"
#include <stralign.h>
using namespace std;



int main()
{
    Triagem * triagem = new Triagem();
    cout << "NOME: ";
    cin >> triagem->nome;

    cout << "ENDEREÇO: ";
    cin >> triagem->endereco;

    cout << "TELEFONE: ";
    cin >> triagem->telefone;

    cout << "RG: ";
    cin >> triagem->rg;

    cout << "CPF: ";
    cin >> triagem->cpf;

    cout << "IDADE: ";
    cin >> triagem->idade;

    cout << "SINTOMAS: : ";
    cin >> triagem->sintoma;

    Paciente * paciente = new Paciente(triagem->nome,triagem->endereco,triagem->telefone,triagem->rg
        ,triagem->cpf,triagem->idade);

    

    return 0;
}






