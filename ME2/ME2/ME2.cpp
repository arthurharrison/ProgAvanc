//Aluno: Arthur Tavares de Souza Junior
//Matricula: 1191105331
//Aluno: Gleydiston Barreto
//Matricula: 


#include <thread>
#include <chrono>
#include <iostream>
#include <locale.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

#pragma once
class Paciente {
	public:
		string nome;
		string telefone;
		string status = "Aguardando";
		int senha=0;
		vector<Paciente> listaPacientes;
		void cadastrarPaciente(); //Implementar Cadastro, Alteração e Busca por pacientes
		void imprimePaciente();
		void alteraSenha(int novaSenha);


};

void Paciente::imprimePaciente() {
	cout << "Paciente: \n\Nome: "
		<< Paciente::nome <<
		"\n\tTelefone: " << Paciente::telefone<<
		"\n\tStatus: " << Paciente::status <<
		"\n";
}

void Paciente::alteraSenha(int novaSenha) {
	senha = novaSenha;
}

//inicializando os metodos
void menu();
void voltarAoMenu();
void verificaCadastro();

int senhasDia = 0; //Deixar Variavel Global para garantirmos que terá somente 16 senhas no dia

void gerarSenha(int segundos=60, int numeroSenhas=16) {
	//Aqui o programa vai atualizar a senha do vetor do paciente, indicando o numero. 
	//Tambem vai atualizar o Status para Aguardando Triagem

	cout << "\nFunction gerarSenha\n";
	if (senhasDia >= numeroSenhas) {
		for (size_t i = 0; i < numeroSenhas; i++)
		{
			cout << "Senha N: " << numeroSenhas  << endl;
			senhasDia = i;
			verificaCadastro();
			//cout << "Contando " << segundos << "s: " << i << "s.." << endl;
			this_thread::sleep_for(chrono::seconds(segundos));
		}
	}
	else {
		cout << "\nTotal de senhas ja geradas no dia.\n";
		cout << "\nVolte mais Tarde!";
	}
	
}

void verificaCadastro() {
	//Funcao de entrada, se o paciente tiver Cadastro, gera a senha, se nao, cria cadastro e verifica cadastro
	string nome;
	cout << "\nFunction Verifica Cadastro\n";
	cout << "\nQual o seu nome?\n";
	std::cin >> nome;

	//if nome existe, gera senha
	//else criar, e gera senha
}

void voltarAoMenu() {
	int opt;
	cout << "\n\Digite a opcao que deseja fazer";
	cout << "\n1.Voltar ao menu";
	cout << "\n2.Fechar o programa\n";
	std::cin >> opt;
	switch (opt)
	{
	case 1:
		cout << "\n\n\n";
		menu();
		break;
	case 2:
		return;
		break;
	default:
		cout << "\nValor errado, por favor digite 1 ou 2";
		voltarAoMenu();
		break;
	}

}

void menu() {
	int  opt;

	std::cout << "------Menu Principal------\n";
	std::cout << "Selecione a opcao desejada:\n";
	std::cout << "1. Solicitar Senha\n";
	std::cout << "2. Triagem do paciente\n";
	std::cout << "3. Consulta do Paciente\n";
	std::cout << "4. Consultar pacientes\n";
	std::cin >> opt;


	switch (opt) {
	case 1:
		//soliSenha();
		break;
	case 2:
		//triagemPaciente();
		break;
	case 3:
		//getPaciente();
		break;
	case 4:
		//getAllPacientes();
		break;
	default:
		cout << "\n\nDigitou numero errado";
		break;
	}
	voltarAoMenu(); //para nao parar o programa

}


int main() {
	menu();
	return 0;
}
