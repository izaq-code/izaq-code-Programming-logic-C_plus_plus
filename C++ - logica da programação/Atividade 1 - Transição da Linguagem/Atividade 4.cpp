#include <iostream>
#include <locale>
#include <string>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");	

int num[8];
int x, y, soma;


for (int n = 0; n < 8;n++){

  cout << "Digite o números entre 1 e 8: ";
  cin >> num[n];
}


cout << "Digite a posição dos números que está entre 1 e 8: ";
   cin >> x;

cout << "Digite outra posição entre 1 e 8: ";
   cin >> y;
   

for (int n = 0; n < 8;n++){
   
   if (num[n] == x) {
   
   soma = num[n];
   
	}
}

for (int n = 0; n < 8;n++){
   
   if (num[n]== y) {
   
   soma = soma+num[n];
   
	}
}

cout << "A soma dos valores é " << soma;
	
	
	system("pause");
	//return 0;
}
