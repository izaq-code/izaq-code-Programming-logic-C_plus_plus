#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

	double sal, aum;
	int cargo;
	string carg;
	
	cout << "Informe o seu sal�rio" << endl;
	cin >> sal;
	
	cout << "-----------------------------" << endl;
	cout << "|COD|    Cargo   |  Aumento |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 1 | Secret�rio |    45%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 2 | Professor  |    35%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 3 | Tesoureiro |    25%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 4 | Coordenador|    15%   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "| 5 | Diretor    | N�o teve |" << endl;
	cout << "-----------------------------" << endl;
	cout << "Informe c�digo do cargo que voc� deseja saber a atualiza��o salarial." << endl;
	cin >> cargo;
	
	switch (cargo) {
	
		case 1:
		aum = sal+(sal*0.45);
		
		cout << "Seu novo sal�rio:" << aum << endl;
		
		break;
		
		case 2:
		aum = sal+(sal*0.35);
		
		cout << "Seu novo sal�rio:" << aum << endl;
				
		break;
		
		case 3:
		aum = sal+(sal*0.25);
		
		cout << "Seu novo sal�rio:" << aum << endl;
						
		break;
		
		case 4:
		aum = sal+(sal*0.15);
		
		cout << "Seu novo sal�rio:" << aum << endl;
						
		break;
		
		case 5:
		aum = sal;
		
		cout << "Seu novo sal�rio: " << aum << endl;
						
		break;
		
		default:
		cout << "Op��o inv�lida!" << endl;
	}
	
	system("pause");
}
