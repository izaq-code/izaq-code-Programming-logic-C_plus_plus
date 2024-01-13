#include <iostream>
#include <locale>
#include <string>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int num[5], num1[5];
	
	
	for (int x = 0; x < 5;x++){
		
	cout << "Digite 5 numeros: \n";
	cin >> num[x];	
		

		if ( num[x] % 2 == 0){
		 
		 num1[x] = num[x] / 2;
			
		} else {
			
		num1[x] = num[x] * 3;	
		}
		
	}
	
	cout << "O Resultado é: \n";
	
	for (int x = 0; x < 5;x++){
		
		cout << num1[x] << " ";
		
	}
	
	
	system("pause");
	//return 0;
}
