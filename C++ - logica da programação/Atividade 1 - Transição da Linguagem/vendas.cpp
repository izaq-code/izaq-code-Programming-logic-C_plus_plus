#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
int val;
float valo;

cout<<"Digite o valor: \n";
cin>>val;

cout<<"Digite o valor de vendas do funcion�rio: \n";
cin>>valo;

if(valo >= val) {
	
cout<<"Ganhou!";
	
}else{
	
cout<<"N�o ganhou!";
}


	return 0;
}
