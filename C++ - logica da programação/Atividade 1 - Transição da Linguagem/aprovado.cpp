#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int med1,med2,med3;
float ari,ari1;
string nome;

med1 = 6;
med2 = 7;
med3 = 10;

ari = med1+med2+med3;
ari1 = ari/3;
cout<<"insira seu nome \n";
cin>>nome;

cout << "sua media foi "<<ari1;

if (ari1 >= 7 ){
	
	cout<<" voce foi aprovado";
	
}else if (ari1 <= 5){
	
	cout<<" reprovado \n";
	cout<<"voce esta de recuperçao \n";
	
}


	return 0;
}
