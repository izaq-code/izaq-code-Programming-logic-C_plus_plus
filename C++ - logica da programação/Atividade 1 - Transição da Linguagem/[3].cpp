#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

	double sal, aum;
	int cargo;
	string carg;
	
	cout << "Informe o seu salário" << endl;
	cin >> sal;
	
	cout << "-----------------------------" << endl;
	cout << "|COD|    Cargo   |  Aumento |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 1 | Secretário |    45%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 2 | Professor  |    35%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 3 | Tesoureiro |    25%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 4 | Coordenador|    15%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 5 | Diretor    | Não teve |" << endl;
	cout << "-----------------------------" << endl;
	cout << "Informe código do cargo que você deseja saber a atualização salarial." << endl;
	cin >> cargo;
	
	switch (cargo) {
	
		case 1:
		aum = sal+(sal*0.45);
		
		cout << "Seu novo salário:" << aum << endl;
		
		break;
		
		case 2:
		aum = sal+(sal*0.35);
		
		cout << "Seu novo salário:" << aum << endl;
				
		break;
		
		case 3:
		aum = sal+(sal*0.25);
		
		cout << "Seu novo salário:" << aum << endl;
						
		break;
		
		case 4:
		aum = sal+(sal*0.15);
		
		cout << "Seu novo salário:" << aum << endl;
						
		break;
		
		case 5:
		aum = sal;
		
		cout << "Seu novo salário: " << aum << endl;
						
		break;
		
		default:
		cout << "Opção inválida!" << endl;
	}
	
	system("pause");
}
