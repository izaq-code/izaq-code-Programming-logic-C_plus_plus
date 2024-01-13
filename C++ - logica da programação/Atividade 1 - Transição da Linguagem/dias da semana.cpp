#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int num;

cout << "Digite um número entre 1 e 7: ";
cin>>num;

if (num ==1) {
	
cout<<"Domingo";	
	
}else if (num ==2 ){
	
cout<<"Segunda-feira";

}else if (num==3 ) {
	
cout<<"Terça-feira";

}else if (num==4 ){
	
cout<<"Quarta-feira";
	
}else if (num==5 ) {
	
cout<<"Quinta-feira";
	
}else if (num==6 ){
	
cout<<"Sexta-feira";
	
}else if (num==7 ){
	
cout<<"Sábado";

}else if (num>7 ){
	
cout<<"Não existe dia da semana com esse número.";
	
}


	return 0;
}
