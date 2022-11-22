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
    string nome;
    string endereco;
    string telefone;
    string rg;
    string cpf;
    int idade;
    string sintomas;

    Triagem * triagem = new Triagem();
    cout << "NOME: ";
    cin >> nome;

    cout << "ENDEREÇO: ";
    cin >> endereco;

    cout << "TELEFONE: ";
    cin >> telefone;

    cout << "RG: ";
    cin >> rg;

    cout << "CPF: ";
    cin >> cpf;

    cout << "IDADE: ";
    cin >> idade;

    cout << "SINTOMAS: : ";
    cin >> sintomas;

    Paciente* paciente = new Paciente(nome, endereco, telefone, rg
        , cpf, idade);

    triagem->cadastrarPaciente(* paciente);

     paciente->imprimir();


    return 0;
}






