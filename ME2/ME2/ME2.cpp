//Aluno: Arthur Tavares de Souza Junior
//Matricula: 1191105331
//Aluno: Gleydiston Barreto
//Matricula: 


#include <iostream>
#include <iostream>
#include <locale.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>

using namespace std;


//inicializando os metodos
void menu();
void voltarAoMenu();

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
