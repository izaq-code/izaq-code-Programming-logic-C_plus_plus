#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

char sex;
float num1,num2,peso,peso1,num3,num4;

cout<<"insira seu sexo (f) para femenino e (m) para masculino : \n";
cin>>sex;

if (sex=='f' || sex== 'F'){
	
cout<<"insira seu peso : \n";
cin>>num1;
cout<<"insira sua altura : \n";
cin>>num2;

peso = (72.2*num2)-58;

cout<< "seu peso ideal e : "<< peso;

	
	
}else if ( sex== 'm' || sex== 'M') {
	
cout<<"insira seu peso : \n";
cin>>num2;
cout<<"insira sua altura : \n";
cin>>num4;

peso1 = (62.1*num4)-44.7;

cout<< "seu peso ideal e : "<< peso1;	
	
}else{
	
	cout<<"sexo invalido \n";
	
}

	return 0;
}
