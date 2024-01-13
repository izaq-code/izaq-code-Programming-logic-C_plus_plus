#include <iostream>
#include <locale>
#include <windows.h>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	double num;
	int ope;
	string op; 
	
	cout << "Informe um número real";
	cin >> num;
	
	cout << "-----------------------" << endl;
	cout << "| Cod |    Operação   |" << endl;
	cout << "|----------------------" << endl;
	cout << "| 101 | Raiz Quadrada |" << endl;
	cout << "|----------------------" << endl;
	cout << "| 102 |     Metade    |" << endl;
	cout << "|----------------------" << endl;
	cout << "| 103 |   10% do num  |" << endl;
	cout << "|----------------------" << endl;
	cout << "| 104 |     Dobro     |" << endl;
	cout << "-----------------------" << endl;
	cout << "Informe código para a realização da operação" << endl;
	cin >> ope;
	
	switch (ope) {
	
		case 101:
		num = sqrt(num);
		op = "Raiz quadrada";
		
		cout << "Tipo de operação: " << op << endl;
		cout << "Resultado: " << num << endl;
		
		break;
		
		case 102:
		num = num/2;
		op = "Metade";
		
		cout << "Tipo de operação: " << op << endl;
		cout << "Resultado: " << num << endl;
		
		break;
		
		case 103:
		num = num*0.10;
		op = "10% do num";
		
		cout << "Tipo de operação: " << op << endl;
		cout << "Resultado: " << num << endl;
		
		break;
		
		case 104:
		num = num*2;
		op = "Dobro";
		
		cout << "Tipo de operação: " << op << endl;
		cout << "Resultado: " << num << endl;
		
		break;
		
		default:
		cout << "Opção inválida!";
		
		break;
	}
	
	system("pause");
}
