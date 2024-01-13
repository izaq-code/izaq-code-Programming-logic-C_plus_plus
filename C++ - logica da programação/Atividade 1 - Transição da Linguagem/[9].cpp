#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int cart[4][4];
	int num, m;
	
	//solicitar os valores
	for (int x= 0; x < 4; x++) {
		for (int y= 0; y < 4; y++) {
			cout << "Escreva o número [" << x << "][" << y << "]: ";
			cin >> cart[x][y];	
			num = cart[x][y];
	
			//contar maiores que 10
			for (int x= 0; x < 4; x++) {
				for (int x= 0; x < 4; x++) {
					if (num > 10) {
						m++;
					} 
				}
			}
		}
	}
	
	system("cls");
	
	//imprimir valores informados
	for (int x= 0; x < 4; x++) {
		for (int y= 0; y < 4; y++) {
			cout << cart[x][y] << " ";	
		}
		cout << endl;
	}
	
	cout << "Quantidade de número maiores que 10: " << m/16 << endl;
	
	system("pause");
}
