#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int x;
	double num1, num2, num3;
	string vend;
	
	do {
	cout << "Escreva o n�mero X" << endl;
	cout << "1 - Ordem crescente" << endl;
	cout << "2 - Ordem decrescente" << endl;
	cout << "3 - Um dos n�meros entre os outros" << endl;
	cin >> x;
	
	} while (x != 1 && x != 2 && x != 3);
	
	cout << "Escreva o n�mero A" << endl;
	cin >> num1;
	
	cout << "Escreva o n�mero B" << endl;
	cin >> num2;
	
	cout << "Escreva o n�mero C" << endl;
	cin >> num3;
	
	switch (x) {
	
		case 1:
		   if (num1 > num2 && num1 > num3 && num2 > num3) {
				cout << num3 << ", " << num2 << ", " << num1;
		   
		   } else if (num1 > num2 && num1 > num3 && num3 > num2) {
		  		 cout << num2 << ", " << num3 << ", " << num1;
		   
		   } else if (num2 > num1 && num2 > num3 && num3 > num1) {
		   		cout << num1 << ", " << num3 << ", " << num2;
		   
		   } else if (num2 > num1 && num2 > num3 && num1 > num3)  {
		  		 cout << num3 << ", " << num1 <<", " << num2;
		
		   } else if (num3 > num1 && num3 > num2 && num2 > num1) {
		 		  cout << num1 << ", " << num2 <<", " << num3;
		   
		   } else if (num3 > num1 && num3 > num2 && num1 > num2) {
		   		cout << num2 << ", " << num1 << ", " << num3;
		   
		   } else
		   cout << "Foram digitados n�meros iguais. N�o � poss�vel fazer a ordem desejada.";
		break;
		
		case 2:
		   if (num1 > num2 && num1 > num3 && num2 > num3) {
		   cout << num1 << ", " << num2 << ", " << num3;
		   
		   } else if (num1 > num2 && num1 > num3 && num3 > num2) {
		   cout << num1 << ", " << num3 << ", " << num2;
		
		   } else if (num2 > num1 && num2 > num3 && num3 > num1) {
		   cout << num2 << ", " << num3 << ", " << num1;
		   
		   } else if (num2 > num1 && num2 > num3 && num1 > num3) {
		   cout << num2 << ", " << num1 << ", " << num3;
		   		
		   } else if (num3 > num1 && num3 > num2 && num2 > num1) {
		   cout << num3 << ", " << num2 << ", " << num1;
		   
		   } else if (num3 > num1 && num3 > num2 && num1 > num2) {
		   cout << num3  << ", " << num1 << ", " << num2;
		   
		   } else {
		   cout << "Foram digitados n�meros iguais. N�o � poss�vel fazer a ordem desejada.";
		   }
		break; 
		   
		case 3:
		   if (num1 > num2 && num1 > num3 && num2 > num3) {
		   cout << num1 << ", " << num3 << ", " << num2;
		   
		   } else if (num1 > num2 && num1 > num3 && num3 > num2) {
		   cout << num1 << ", " << num2 << ", " << num3;
		
		   } else if (num2 > num1 && num2 > num3 && num3 > num1)  {
		   cout << num2 << ", " << num1 << ", " << num3;
		   
		   } else if (num2 > num1 && num2 > num3 && num1 > num3)  {
		   cout << num2 << ", " << num3 << ", " << num1;
		
		   } else if (num3 > num1 && num3 > num2 && num2 > num1) {
		   cout << num3 << ", " << num1 << ", " << num2;
		   
		   } else if (num3 > num1 && num3 > num2 && num1 > num2) {
		   cout << num3 << ", " << num2 << ", " << num1;
		   
		   } else {
		   cout << "Foram digitados n�meros iguais. N�o � poss�vel fazer a ordem desejada.";
		   }
		break;
		
		default:
		cout << "Op��o inv�lida";
		break;
	}
	
		cout << endl;
		
	system("pause");
}
