#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int num;

cout << "Digite um n�mero entre 1 e 7: ";
cin>>num;

if (num ==1) {
	
cout<<"Domingo";	
	
}else if (num ==2 ){
	
cout<<"Segunda-feira";

}else if (num==3 ) {
	
cout<<"Ter�a-feira";

}else if (num==4 ){
	
cout<<"Quarta-feira";
	
}else if (num==5 ) {
	
cout<<"Quinta-feira";
	
}else if (num==6 ){
	
cout<<"Sexta-feira";
	
}else if (num==7 ){
	
cout<<"S�bado";

}else if (num>7 ){
	
cout<<"N�o existe dia da semana com esse n�mero.";
	
}


	return 0;
}
