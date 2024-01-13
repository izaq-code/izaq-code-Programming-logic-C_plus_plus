#include <iostream>
#include <locale>
#include <string>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	string nome[5], ok;
	string nom;
	int n = 0, x;
	
	for (int x = 0; x < 5;x++){
			
		cout << "Informe os nomes: \n";
		cin >> nome[x];	
}
	 
system("cls");
		
	cout << "Informe um nome cadastrado: \n";
	cin >> nom;


for (int x = 0; x < 5;x++){

	if (nom != nome[x] ){
	 	n++;
	}
 }
  	
 if (n == 5){
 	cout <<"Não achei \n";
  } else{
 	cout << "ACHEI ";
 }
	
	system("pause");
	//return 0;
}
